#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MyBusModel {
    public ref class Station {
    public:
        property String^ Name;
        property String^ Address;
    public:
        Station();
        Station(String^ Name, String^ Address);
    };
}