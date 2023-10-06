#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MyBusModel {
    public ref class Coordinate {
    public:
        property double x;
        property double y;
    public:
        Coordinate();
        Coordinate(double x, double y);
    };
}