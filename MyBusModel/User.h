#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MyBusModel {
    public ref class User {
        //Definici�n de atributos
    public:
        property int Age;
        property String^ DNI;
        property String^ Name;
        property int Password;
        property int Id;
    public:
        User();
        User(int Age, String^ DNI, String^ Name, int Password, int Id);
    };
}