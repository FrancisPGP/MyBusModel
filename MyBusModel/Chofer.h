#pragma once
#include "User.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MyBusModel {
    public ref class Chofer : public User {
    public:
        property int NumMultas;
        property int Punctuation;
        property int AgeExperience;
    public:
        Chofer();
        Chofer(int NumMultas, int Punctuation, int AgeExperience);
    };
}