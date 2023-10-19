#pragma once

using namespace System;
using namespace MyBusModel;
using namespace System::Collections::Generic;

namespace MyBusPersistance {
	//public ref class Class1 lo cambiamos por Persistance
	public ref class Persistance
	{
		private:
			//Lista global
			static List<Vehicule^>^ transportsList = gcnew List<Vehicule^>();
			// TODO: Agregue aquí los métodos de esta clase.
		public:
			static String^ Lista_Vehicule = "Vehicules.txt";
			static String^ Lista_Vehicule_XML = "Vehicules.xml";
			static String^ Lista_Vehicule_BIN = "Vehicules.bin";

			//Nombre del método estático:PersistTextFile
			static void PersistTextFile(String^, Object^);
			//PersistTextFile(Lista_Vehicule, transport);

			//La clase es Object
			static Object^ LoadTextFile(String^);
			
			static void PersistXMLFile(String^ fileName, Object^ persistObject);
			static Object^ LoadXMLFile(String^ fileName);
			static void PersistBinaryFile(String^ fileName, Object^ persistObject);
			static Object^ LoadBinaryFile(String^ fileName);

			//Metodos para el manejo de la persistencia de los vehiculos
			static void AddTransport(Vehicule^ transport);
			static List<Vehicule^>^ QueryAllTransports();
			static void UpdateTransport(Vehicule^ transport);
			static void DeleteTransport(int transportId);
			static Vehicule^ QueryTransportById(int transportId);
	};
}
