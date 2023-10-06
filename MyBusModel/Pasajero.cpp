#include "Pasajero.h"

using namespace MyBusModel;

Pasajero::Pasajero() {

}

Pasajero::Pasajero(int NumTrips, int CustomerPoints, String^ FavoritePlaces, String^ Claims) {
	this->NumTrips = NumTrips;
	this->CustomerPoints = CustomerPoints;
	this->FavoritePlaces = FavoritePlaces;
	this->Claims = Claims;
}