#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MyBusModel {
    public ref class License {
    public:
        property String^ Number;
        property String^ Class;
    public:
        License();
        License(String^ Number, String^ Class);
    };
}