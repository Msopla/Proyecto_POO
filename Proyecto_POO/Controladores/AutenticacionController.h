#pragma once

#include "../Modelos/Usuario.h"
#include "RutasDatos.h"

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::IO;
    using namespace System::Text;
    using namespace ProyectoPOO::Modelos;

    public ref class AutenticacionController
    {
    private:
        List<Usuario^>^ usuarios;
        String^ rutaArchivo;

        void Cargar()
        {
            usuarios->Clear();
            if (!File::Exists(rutaArchivo)) {
                return;
            }

            for each (String^ linea in File::ReadAllLines(rutaArchivo, Encoding::UTF8)) {
                if (String::IsNullOrWhiteSpace(linea)) {
                    continue;
                }

                array<String^>^ datos = linea->Split('|');
                if (datos->Length == 2) {
                    Usuario^ usuario = gcnew Usuario();
                    usuario->Nombre = datos[0];
                    usuario->Contrasena = datos[1];
                    usuario->Rol = L"Usuario";
                    usuarios->Add(usuario);
                }
            }
        }

        void Guardar()
        {
            StreamWriter^ writer = gcnew StreamWriter(rutaArchivo, false, Encoding::UTF8);
            try {
                for each (Usuario^ usuario in usuarios) {
                    writer->WriteLine(usuario->Nombre + L"|" + usuario->Contrasena);
                }
            }
            finally {
                writer->Close();
            }
        }

    public:
        AutenticacionController()
        {
            usuarios = gcnew List<Usuario^>();
            rutaArchivo = RutasDatos::ObtenerRuta(L"usuarios.dat");
            Cargar();
        }

        Usuario^ Autenticar(String^ nombre, String^ contrasena)
        {
            if (nombre == L"admin" && contrasena == L"12345") {
                Usuario^ administrador = gcnew Usuario();
                administrador->Nombre = nombre;
                administrador->Contrasena = contrasena;
                administrador->Rol = L"Administrador";
                return administrador;
            }

            Cargar();
            for each (Usuario^ usuario in usuarios) {
                if (String::Equals(usuario->Nombre, nombre, StringComparison::Ordinal) &&
                    String::Equals(usuario->Contrasena, contrasena, StringComparison::Ordinal)) {
                    return usuario;
                }
            }

            return nullptr;
        }

        String^ Registrar(String^ nombre, String^ contrasena)
        {
            nombre = nombre == nullptr ? String::Empty : nombre->Trim();
            contrasena = contrasena == nullptr ? String::Empty : contrasena->Trim();

            if (nombre->Length == 0 || contrasena->Length == 0) {
                return L"Completa usuario y contrasena";
            }
            if (contrasena->Length < 4) {
                return L"Contrasena debe tener minimo 4 caracteres";
            }

            Cargar();
            for each (Usuario^ usuario in usuarios) {
                if (String::Equals(usuario->Nombre, nombre, StringComparison::OrdinalIgnoreCase)) {
                    return L"El usuario ya existe";
                }
            }

            Usuario^ nuevoUsuario = gcnew Usuario();
            nuevoUsuario->Nombre = nombre;
            nuevoUsuario->Contrasena = contrasena;
            nuevoUsuario->Rol = L"Usuario";
            usuarios->Add(nuevoUsuario);
            Guardar();
            return nullptr;
        }
    };

}
}
