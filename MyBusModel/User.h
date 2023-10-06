#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MyBusModel {
    public ref class User {
        //Definición de atributos
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