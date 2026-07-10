#pragma once

#include "../Modelos/Paciente.h"
#include "RutasDatos.h"

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::IO;
    using namespace System::Text;
    using namespace ProyectoPOO::Modelos;

    public ref class PacienteController
    {
    private:
        List<Paciente^>^ pacientes;
        String^ rutaArchivo;
        int siguienteId;

        void Guardar()
        {
            StreamWriter^ writer = gcnew StreamWriter(rutaArchivo, false, Encoding::UTF8);
            try {
                writer->WriteLine(siguienteId.ToString());
                for each (Paciente^ paciente in pacientes) {
                    writer->WriteLine(
                        paciente->Id + L"|" + paciente->Cedula + L"|" + paciente->Nombre + L"|" +
                        paciente->Correo + L"|" + paciente->Motivo + L"|" + paciente->TipoSangre + L"|" +
                        paciente->Alergias + L"|" + paciente->Enfermedades + L"|" +
                        paciente->SeguroMedico + L"|" + paciente->MedicoTratante + L"|" + paciente->Estado);
                }
            }
            finally {
                writer->Close();
            }
        }

    public:
        PacienteController()
        {
            pacientes = gcnew List<Paciente^>();
            rutaArchivo = RutasDatos::ObtenerRuta(L"pacientes.dat");
            siguienteId = 1000;
            Recargar();
        }

        void Recargar()
        {
            pacientes->Clear();
            siguienteId = 1000;
            if (!File::Exists(rutaArchivo)) {
                return;
            }

            array<String^>^ lineas = File::ReadAllLines(rutaArchivo, Encoding::UTF8);
            int idLeido;
            if (lineas->Length > 0 && Int32::TryParse(lineas[0], idLeido)) {
                siguienteId = idLeido;
            }

            for (int i = 1; i < lineas->Length; i++) {
                if (String::IsNullOrWhiteSpace(lineas[i])) {
                    continue;
                }

                array<String^>^ datos = lineas[i]->Split('|');
                if (datos->Length != 11) {
                    continue;
                }

                Paciente^ paciente = gcnew Paciente();
                paciente->Id = datos[0];
                paciente->Cedula = datos[1];
                paciente->Nombre = datos[2];
                paciente->Correo = datos[3];
                paciente->Motivo = datos[4];
                paciente->TipoSangre = datos[5];
                paciente->Alergias = datos[6];
                paciente->Enfermedades = datos[7];
                paciente->SeguroMedico = datos[8];
                paciente->MedicoTratante = datos[9];
                paciente->Estado = datos[10];
                pacientes->Add(paciente);
            }
        }

        List<Paciente^>^ ObtenerTodos()
        {
            return gcnew List<Paciente^>(pacientes);
        }

        Paciente^ BuscarPorCedula(String^ cedula)
        {
            Recargar();
            String^ criterio = cedula == nullptr ? String::Empty : cedula->Trim();
            for each (Paciente^ paciente in pacientes) {
                if (String::Equals(paciente->Cedula, criterio, StringComparison::OrdinalIgnoreCase)) {
                    return paciente;
                }
            }
            return nullptr;
        }

        Paciente^ Agregar(Paciente^ paciente)
        {
            if (paciente == nullptr) {
                throw gcnew ArgumentNullException(L"paciente");
            }

            for each (Paciente^ existente in pacientes) {
                if (String::Equals(existente->Cedula, paciente->Cedula, StringComparison::OrdinalIgnoreCase)) {
                    throw gcnew InvalidOperationException(L"Ya existe un paciente con esa cedula.");
                }
            }

            paciente->Id = siguienteId.ToString();
            paciente->Estado = L"Activo";
            siguienteId++;
            pacientes->Add(paciente);
            Guardar();
            return paciente;
        }

        void GuardarCambios()
        {
            Guardar();
        }
    };

}
}
