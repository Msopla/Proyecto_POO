#pragma once

namespace ProyectoPOO {
namespace Modelos {

    using namespace System;

    public ref class UsuarioGestion
    {
    public:
        property String^ Nombre;
        property String^ NumeroId;
        property String^ Pais;
        property String^ Contrasena;
        property String^ Estado;
    };

}
}
