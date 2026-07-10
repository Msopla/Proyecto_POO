#pragma once

#include "../Modelos/UsuarioGestion.h"
#include "RutasDatos.h"

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::IO;
    using namespace System::Text;
    using namespace ProyectoPOO::Modelos;

    public ref class GestionUsuariosController
    {
    private:
        List<UsuarioGestion^>^ usuarios;
        String^ rutaArchivo;

        void Guardar()
        {
            StreamWriter^ writer = gcnew StreamWriter(rutaArchivo, false, Encoding::UTF8);
            try {
                for each (UsuarioGestion^ usuario in usuarios) {
                    writer->WriteLine(usuario->Nombre + L"|" + usuario->NumeroId + L"|" + usuario->Pais +
                        L"|" + usuario->Contrasena + L"|" + usuario->Estado);
                }
            }
            finally {
                writer->Close();
            }
        }

    public:
        GestionUsuariosController()
        {
            usuarios = gcnew List<UsuarioGestion^>();
            rutaArchivo = RutasDatos::ObtenerRuta(L"usuarios_sistema.dat");
            Recargar();
        }

        void Recargar()
        {
            usuarios->Clear();
            if (!File::Exists(rutaArchivo)) {
                return;
            }

            for each (String^ linea in File::ReadAllLines(rutaArchivo, Encoding::UTF8)) {
                array<String^>^ datos = linea->Split('|');
                if (datos->Length != 5) {
                    continue;
                }
                UsuarioGestion^ usuario = gcnew UsuarioGestion();
                usuario->Nombre = datos[0];
                usuario->NumeroId = datos[1];
                usuario->Pais = datos[2];
                usuario->Contrasena = datos[3];
                usuario->Estado = datos[4];
                usuarios->Add(usuario);
            }
        }

        List<UsuarioGestion^>^ ObtenerTodos()
        {
            return gcnew List<UsuarioGestion^>(usuarios);
        }

        UsuarioGestion^ Buscar(String^ nombre)
        {
            for each (UsuarioGestion^ usuario in usuarios) {
                if (String::Equals(usuario->Nombre, nombre, StringComparison::OrdinalIgnoreCase)) {
                    return usuario;
                }
            }
            return nullptr;
        }

        void Agregar(UsuarioGestion^ usuario)
        {
            if (Buscar(usuario->Nombre) != nullptr) {
                throw gcnew InvalidOperationException(L"El usuario ya existe.");
            }
            usuario->Estado = L"Activo";
            usuarios->Add(usuario);
            Guardar();
        }

        void Bloquear(String^ nombre)
        {
            UsuarioGestion^ usuario = Buscar(nombre);
            if (usuario == nullptr) {
                throw gcnew InvalidOperationException(L"Usuario no encontrado.");
            }
            usuario->Estado = L"Bloqueado";
            Guardar();
        }
    };

}
}
