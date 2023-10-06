#pragma once
#include "User.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MyBusModel {
    public ref class Pasajero : public User {
    public:
        property int NumTrips;
        property int CustomerPoints;
        property String^ FavoritePlaces;
        property String^ Claims;
    public:
        Pasajero();
        Pasajero(int NumTrips, int CustomerPoints, String^ FavoritePlaces, String^ Claims);
    };
}