#pragma once

namespace ProyectoPOO {
namespace Modelos {

    using namespace System;

    public ref class Medicamento
    {
    public:
        property String^ Nombre;
        property String^ Lote;
        property DateTime FechaCaducidad;
        property Decimal Precio;
    };

}
}
