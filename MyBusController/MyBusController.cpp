//#include "pch.h"

#include "MyBusController.h"

using namespace MyBusPersistance;
using namespace MyBusController;

//using namespace MyBusPersistance; o MyBusPersistance::Persistance::PersistTextFile;
//tipo de funcion|using namespace|Clase|Metodo

void Controller::AddVehicule(Vehicule^ transport) {
	//using namespace|Clase|Metodo
	Persistance::AddTransport(transport);
}

List<Vehicule^>^ Controller::QueryAllTransports() {
	return Persistance::QueryAllTransports();
}

void Controller::UpdateTransport(Vehicule^ transport) {
	Persistance::UpdateTransport(transport);
}

void Controller::DeleteTransport(int transportId) {
	Persistance::DeleteTransport(transportId);
}

Vehicule^ Controller::QueryTransportById(int transportId) {
	return Persistance::QueryTransportById(transportId);
}