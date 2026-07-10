#pragma once

namespace ProyectoPOO {
namespace Modelos {

    using namespace System;

    public ref class Usuario
    {
    public:
        property String^ Nombre;
        property String^ Contrasena;
        property String^ Rol;
    };

}
}
