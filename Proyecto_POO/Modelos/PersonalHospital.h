#pragma once

namespace ProyectoPOO {
namespace Modelos {

    using namespace System;

    public ref class PersonalHospital
    {
    public:
        property String^ Nombre;
        property String^ Cedula;
        property String^ Telefono;
        property String^ Cargo;
        property String^ Turno;
        property String^ Zona;
        property String^ PacienteAsignado;
        property String^ IdPaciente;
    };

}
}
