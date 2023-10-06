#include "Station.h"

using namespace MyBusModel;

Station::Station() {

}

Station::Station(String^ Name, String^ Address) {
	this->Name = Name;
	this->Address = Address;
}