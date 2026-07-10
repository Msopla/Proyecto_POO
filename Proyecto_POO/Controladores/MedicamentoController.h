#pragma once

#include "../Modelos/Medicamento.h"
#include "RutasDatos.h"

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Globalization;
    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Web::Script::Serialization;
    using namespace ProyectoPOO::Modelos;

    public ref class MedicamentoController
    {
    private:
        String^ rutaGuardado;

        Object^ ObtenerValor(System::Collections::Generic::IDictionary<String^, Object^>^ datos, ... array<String^>^ nombres)
        {
            for each (KeyValuePair<String^, Object^> elemento in datos) {
                for each (String^ nombre in nombres) {
                    if (String::Equals(elemento.Key, nombre, StringComparison::OrdinalIgnoreCase)) {
                        return elemento.Value;
                    }
                }
            }
            return nullptr;
        }

        String^ ObtenerTexto(System::Collections::Generic::IDictionary<String^, Object^>^ datos, ... array<String^>^ nombres)
        {
            Object^ valor = ObtenerValor(datos, nombres);
            return valor == nullptr
                ? String::Empty
                : Convert::ToString(valor, CultureInfo::InvariantCulture)->Trim();
        }

        bool IntentarConvertirFecha(String^ texto, DateTime% fecha)
        {
            array<String^>^ formatos = gcnew array<String^> {
                L"yyyy-MM-dd", L"yyyy/MM/dd", L"dd/MM/yyyy", L"dd-MM-yyyy",
                L"yyyy-MM-ddTHH:mm:ss", L"yyyy-MM-ddTHH:mm:ss.fff"
            };

            return DateTime::TryParseExact(
                texto, formatos, CultureInfo::InvariantCulture,
                DateTimeStyles::AllowWhiteSpaces, fecha) ||
                DateTime::TryParse(texto, CultureInfo::CurrentCulture,
                    DateTimeStyles::AllowWhiteSpaces, fecha) ||
                DateTime::TryParse(texto, CultureInfo::InvariantCulture,
                    DateTimeStyles::AllowWhiteSpaces, fecha);
        }

        bool IntentarConvertirPrecio(Object^ valor, Decimal% precio)
        {
            if (valor == nullptr) {
                return false;
            }

            String^ texto = Convert::ToString(valor, CultureInfo::InvariantCulture);
            return Decimal::TryParse(texto, NumberStyles::Number,
                CultureInfo::InvariantCulture, precio) ||
                Decimal::TryParse(texto, NumberStyles::Number,
                    CultureInfo::CurrentCulture, precio);
        }

        Medicamento^ ConvertirMedicamento(
            System::Collections::Generic::IDictionary<String^, Object^>^ datos,
            int numeroRegistro,
            List<String^>^ errores)
        {
            String^ nombre = ObtenerTexto(datos, L"nombre");
            String^ lote = ObtenerTexto(datos, L"lote");
            String^ textoFecha = ObtenerTexto(
                datos, L"fechaCaducidad", L"fecha_caducidad", L"fecha de caducidad", L"caducidad", L"fecha");
            Object^ valorPrecio = ObtenerValor(datos, L"precio");

            List<String^>^ problemas = gcnew List<String^>();
            if (String::IsNullOrWhiteSpace(nombre)) {
                problemas->Add(L"el nombre es obligatorio");
            }
            if (String::IsNullOrWhiteSpace(lote)) {
                problemas->Add(L"el lote es obligatorio");
            }

            DateTime fecha;
            if (!IntentarConvertirFecha(textoFecha, fecha)) {
                problemas->Add(L"la fecha de caducidad no es valida");
            }
            else if (fecha.Date < DateTime::Today) {
                problemas->Add(L"el medicamento esta caducado");
            }

            Decimal precio;
            if (!IntentarConvertirPrecio(valorPrecio, precio) || precio <= Decimal::Zero) {
                problemas->Add(L"el precio debe ser un numero mayor que cero");
            }

            if (problemas->Count > 0) {
                errores->Add(String::Format(
                    L"Registro {0}: {1}.", numeroRegistro,
                    String::Join(L", ", problemas->ToArray())));
                return nullptr;
            }

            Medicamento^ medicamento = gcnew Medicamento();
            medicamento->Nombre = nombre;
            medicamento->Lote = lote;
            medicamento->FechaCaducidad = fecha.Date;
            medicamento->Precio = precio;
            return medicamento;
        }

        void AgregarDesdeObjeto(
            Object^ elemento,
            int numeroRegistro,
            List<Medicamento^>^ medicamentos,
            List<String^>^ errores,
            Dictionary<String^, bool>^ lotes)
        {
            System::Collections::Generic::IDictionary<String^, Object^>^ datos =
                dynamic_cast<System::Collections::Generic::IDictionary<String^, Object^>^>(elemento);
            if (datos == nullptr) {
                errores->Add(String::Format(
                    L"Registro {0}: debe ser un objeto JSON.", numeroRegistro));
                return;
            }

            Medicamento^ medicamento = ConvertirMedicamento(datos, numeroRegistro, errores);
            if (medicamento == nullptr) {
                return;
            }

            if (lotes->ContainsKey(medicamento->Lote)) {
                errores->Add(String::Format(
                    L"Registro {0}: el lote '{1}' esta repetido.",
                    numeroRegistro, medicamento->Lote));
                return;
            }
            lotes->Add(medicamento->Lote, true);
            medicamentos->Add(medicamento);
        }

        void EscribirJson(String^ rutaArchivo, List<Medicamento^>^ medicamentos)
        {
            if (medicamentos == nullptr || medicamentos->Count == 0) {
                throw gcnew InvalidOperationException(L"No hay medicamentos validos para guardar.");
            }

            List<Dictionary<String^, Object^>^>^ datos =
                gcnew List<Dictionary<String^, Object^>^>();
            for each (Medicamento^ medicamento in medicamentos) {
                Dictionary<String^, Object^>^ elemento = gcnew Dictionary<String^, Object^>();
                elemento->Add(L"nombre", medicamento->Nombre);
                elemento->Add(L"lote", medicamento->Lote);
                elemento->Add(L"fechaCaducidad",
                    medicamento->FechaCaducidad.ToString(L"yyyy-MM-dd", CultureInfo::InvariantCulture));
                elemento->Add(L"precio", medicamento->Precio);
                datos->Add(elemento);
            }

            Dictionary<String^, Object^>^ raiz = gcnew Dictionary<String^, Object^>();
            raiz->Add(L"medicamentos", datos);

            JavaScriptSerializer^ serializador = gcnew JavaScriptSerializer();
            File::WriteAllText(rutaArchivo, serializador->Serialize(raiz), Encoding::UTF8);
        }

    public:
        MedicamentoController()
        {
            rutaGuardado = RutasDatos::ObtenerRuta(L"medicamentos.json");
        }

        List<Medicamento^>^ LeerJson(String^ rutaArchivo, List<String^>^% errores)
        {
            errores = gcnew List<String^>();
            List<Medicamento^>^ medicamentos = gcnew List<Medicamento^>();

            if (String::IsNullOrWhiteSpace(rutaArchivo) || !File::Exists(rutaArchivo)) {
                throw gcnew FileNotFoundException(L"No se encontro el archivo JSON seleccionado.");
            }
            if (!String::Equals(Path::GetExtension(rutaArchivo), L".json",
                StringComparison::OrdinalIgnoreCase)) {
                throw gcnew InvalidDataException(L"El archivo seleccionado debe tener extension .json.");
            }

            String^ contenido = File::ReadAllText(rutaArchivo, Encoding::UTF8);
            if (String::IsNullOrWhiteSpace(contenido)) {
                throw gcnew InvalidDataException(L"El archivo JSON esta vacio.");
            }

            JavaScriptSerializer^ serializador = gcnew JavaScriptSerializer();
            Object^ raiz = serializador->DeserializeObject(contenido);
            Object^ registros = raiz;

            System::Collections::Generic::IDictionary<String^, Object^>^ objetoRaiz =
                dynamic_cast<System::Collections::Generic::IDictionary<String^, Object^>^>(raiz);
            if (objetoRaiz != nullptr) {
                Object^ lista = ObtenerValor(objetoRaiz, L"medicamentos");
                if (lista != nullptr) {
                    registros = lista;
                }
            }

            Dictionary<String^, bool>^ lotes =
                gcnew Dictionary<String^, bool>(StringComparer::OrdinalIgnoreCase);
            array<Object^>^ arreglo = dynamic_cast<array<Object^>^>(registros);
            if (arreglo != nullptr) {
                for (int i = 0; i < arreglo->Length; i++) {
                    AgregarDesdeObjeto(arreglo[i], i + 1, medicamentos, errores, lotes);
                }
            }
            else if (dynamic_cast<System::Collections::Generic::IDictionary<String^, Object^>^>(registros) != nullptr) {
                AgregarDesdeObjeto(registros, 1, medicamentos, errores, lotes);
            }
            else {
                throw gcnew InvalidDataException(
                    L"El JSON debe contener un medicamento, una lista o un objeto con la propiedad 'medicamentos'.");
            }

            return medicamentos;
        }

        List<Medicamento^>^ ValidarFilas(
            List<array<String^>^>^ filas,
            List<String^>^% errores)
        {
            errores = gcnew List<String^>();
            List<Medicamento^>^ medicamentos = gcnew List<Medicamento^>();
            Dictionary<String^, bool>^ lotes =
                gcnew Dictionary<String^, bool>(StringComparer::OrdinalIgnoreCase);

            if (filas == nullptr) {
                return medicamentos;
            }

            for (int i = 0; i < filas->Count; i++) {
                array<String^>^ fila = filas[i];
                if (fila == nullptr || fila->Length < 4) {
                    errores->Add(String::Format(L"Fila {0}: faltan columnas.", i + 1));
                    continue;
                }

                Dictionary<String^, Object^>^ datos = gcnew Dictionary<String^, Object^>();
                datos->Add(L"nombre", fila[0]);
                datos->Add(L"lote", fila[1]);
                datos->Add(L"fechaCaducidad", fila[2]);
                datos->Add(L"precio", fila[3]);
                AgregarDesdeObjeto(datos, i + 1, medicamentos, errores, lotes);
            }

            return medicamentos;
        }

        void GuardarEnArchivo(String^ rutaArchivo, List<Medicamento^>^ medicamentos)
        {
            if (String::IsNullOrWhiteSpace(rutaArchivo)) {
                throw gcnew ArgumentException(L"No se ha seleccionado un archivo JSON.");
            }
            if (!String::Equals(Path::GetExtension(rutaArchivo), L".json",
                StringComparison::OrdinalIgnoreCase)) {
                throw gcnew InvalidDataException(L"El archivo debe tener extension .json.");
            }

            EscribirJson(rutaArchivo, medicamentos);
        }

        void Guardar(List<Medicamento^>^ medicamentos)
        {
            EscribirJson(rutaGuardado, medicamentos);
        }

        property String^ RutaGuardado
        {
            String^ get() { return rutaGuardado; }
        }
    };

}
}
