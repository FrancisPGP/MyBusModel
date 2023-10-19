#pragma once

using namespace System;
using namespace MyBusModel;
using namespace System::Collections::Generic;

namespace MyBusController {
	public ref class Controller
	{
		// TODO: Agregue aquí los métodos de esta clase.
	public:
		static void AddVehicule(Vehicule^);
		static List<Vehicule^>^ QueryAllTransports();
		static void UpdateTransport(Vehicule^);
		static void DeleteTransport(int transportId);
		static Vehicule^ QueryTransportById(int transportId);
		//QueryAllTransports=QueryAllRobots
	};
}
