#pragma once

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::IO;

    public ref class RutasDatos abstract sealed
    {
    public:
        static String^ ObtenerRuta(String^ nombreArchivo)
        {
            String^ raiz = Path::Combine(
                Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData),
                L"ProyectoPOO");
            String^ directorioDatos = Path::Combine(raiz, L"Datos");
            Directory::CreateDirectory(directorioDatos);

            String^ destino = Path::Combine(directorioDatos, nombreArchivo);
            if (!File::Exists(destino)) {
                String^ archivoAnterior = Path::Combine(raiz, nombreArchivo);
                String^ semilla = Path::Combine(
                    AppDomain::CurrentDomain->BaseDirectory,
                    L"Datos",
                    nombreArchivo);

                if (File::Exists(archivoAnterior)) {
                    File::Copy(archivoAnterior, destino, false);
                }
                else if (File::Exists(semilla)) {
                    File::Copy(semilla, destino, false);
                }
            }

            return destino;
        }
    };

}
}
