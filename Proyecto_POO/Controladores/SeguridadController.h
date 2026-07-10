#pragma once

#include "../Modelos/EmpleadoSeguridad.h"
#include "RutasDatos.h"

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::IO;
    using namespace System::Text;
    using namespace ProyectoPOO::Modelos;

    public ref class SeguridadController
    {
    private:
        List<EmpleadoSeguridad^>^ empleados;
        String^ rutaArchivo;

    public:
        SeguridadController()
        {
            empleados = gcnew List<EmpleadoSeguridad^>();
            rutaArchivo = RutasDatos::ObtenerRuta(L"empleados_seguridad.txt");
            Recargar();
        }

        void Recargar()
        {
            empleados->Clear();
            if (!File::Exists(rutaArchivo)) {
                return;
            }

            for each (String^ linea in File::ReadAllLines(rutaArchivo, Encoding::UTF8)) {
                array<String^>^ datos = linea->Split(';');
                if (datos->Length != 5) {
                    continue;
                }

                EmpleadoSeguridad^ empleado = gcnew EmpleadoSeguridad();
                empleado->Nombre = datos[0];
                empleado->Cedula = datos[1];
                empleado->Telefono = datos[2];
                empleado->Turno = datos[3];
                empleado->Lugar = datos[4];
                empleados->Add(empleado);
            }
        }

        List<EmpleadoSeguridad^>^ ObtenerTodos()
        {
            return gcnew List<EmpleadoSeguridad^>(empleados);
        }

        void Agregar(EmpleadoSeguridad^ empleado)
        {
            if (empleado == nullptr) {
                throw gcnew ArgumentNullException(L"empleado");
            }

            StreamWriter^ writer = gcnew StreamWriter(rutaArchivo, true, Encoding::UTF8);
            try {
                writer->WriteLine(
                    empleado->Nombre + L";" + empleado->Cedula + L";" + empleado->Telefono + L";" +
                    empleado->Turno + L";" + empleado->Lugar);
            }
            finally {
                writer->Close();
            }
            empleados->Add(empleado);
        }
    };

}
}
