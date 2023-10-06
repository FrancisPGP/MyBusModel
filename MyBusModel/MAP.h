#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MyBusModel {
    public ref class MAP {
    public:
        property String^ StationList;
    public:
        MAP();
        MAP(String^ StationList);
    };
}