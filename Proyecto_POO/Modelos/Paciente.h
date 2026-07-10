#pragma once

namespace ProyectoPOO {
namespace Modelos {

    using namespace System;

    public ref class Paciente
    {
    public:
        property String^ Id;
        property String^ Cedula;
        property String^ Nombre;
        property String^ Correo;
        property String^ Motivo;
        property String^ TipoSangre;
        property String^ Alergias;
        property String^ Enfermedades;
        property String^ SeguroMedico;
        property String^ MedicoTratante;
        property String^ Estado;
    };

}
}
