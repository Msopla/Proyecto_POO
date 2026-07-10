#pragma once

namespace ProyectoPOO {
namespace Modelos {

    using namespace System;

    public ref class EmpleadoSeguridad
    {
    public:
        property String^ Nombre;
        property String^ Cedula;
        property String^ Telefono;
        property String^ Turno;
        property String^ Lugar;
    };

}
}
