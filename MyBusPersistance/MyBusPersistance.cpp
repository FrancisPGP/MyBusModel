//#include "pch.h"

#include "MyBusPersistance.h"

using namespace System::IO;
using namespace MyBusPersistance;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	//Programar la persistencia
	//Objeto: FileStream (Maneja el flujo de archivos)
	FileStream^ file;
	//Objeto: WriteStream (Maneja el flujo de escritura)
	StreamWriter^ writer;
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<Vehicule^>::typeid) {
		List<Vehicule^>^ transports = (List<Vehicule^>^)persistObject;
		for (int i = 0; i < transports->Count; i++) {
			Vehicule^ t = transports[i];
			//Atributos de Vehicule: Id,Type,Company,License_Plate
			writer->WriteLine(t->Id + "," + t->Type + "," + t->Company + "," + t->License_Plate);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}

//De Text a XML
void Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew StreamWriter(fileName);
		if (persistObject->GetType() == List<Vehicule^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Vehicule^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}

	}
	catch (Exception^ ex) { //Si ocurre algo distinto entra aquí
		//Todo error puede se considerado como una Exception, no al revés
		throw ex;
	}
	finally { //El más importante: serán las instrucciones que se vana ejecutar si o si
		if (writer != nullptr) writer->Close();
	}
}

void Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	BinaryFormatter^ formatter = gcnew BinaryFormatter();
	try {
		file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		formatter->Serialize(file, persistObject);
	}
	catch (Exception^ ex) { //Si ocurre algo distinto entra aquí
		//Todo error puede se considerado como una Exception, no al revés
		throw ex;
	}
	finally { //El más importante: serán las instrucciones que se vana ejecutar si o si
		if (file != nullptr) file->Close();
	}
}

Object^ Persistance::LoadTextFile(String^ fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;
	
	//Programar la lectura de datos
	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		if (fileName->Equals(Lista_Vehicule)) {
			result = gcnew List<Vehicule^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array <String^>^ record = line->Split(',');
				Vehicule^ transport = gcnew Vehicule();
				//Id es de tipo int por eso hacemos la conversión
				transport->Id = Convert::ToInt32(record[0]);
				transport->Type = record[1];
				transport->Company = record[2];
				transport->License_Plate = record[3];
				((List<Vehicule^>^)result)->Add(transport);
			}
		}
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	
	return result;
}
//tipo de funcion|using namespace|Clase|Metodo

Object^ Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;

	//Programar la lectura de datos
	try {
		if (File::Exists(fileName)) {
			//file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(Lista_Vehicule_XML)) {
				//result = gcnew List<Vehicule^>();
				xmlSerializer = gcnew XmlSerializer(List<Vehicule^>::typeid);
				result = (List<Vehicule^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}

	return result;
}

Object^ Persistance::LoadBinaryFile(String^ fileName) {
	Object^ result;
	FileStream^ file;
	BinaryFormatter^ formatter;
	//Programar la lectura de datos
	try {
		if (File::Exists(fileName)) {
			file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			formatter = gcnew BinaryFormatter();
			if (fileName->Equals(Lista_Vehicule_BIN)) {
				//result = gcnew List<Vehicule^>();
				result = formatter->Deserialize(file);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
	}

	return result;
}

void Persistance::AddTransport(Vehicule^ transport) {
	transportsList->Add(transport);
	//PersistTextFile(Lista_Vehicule, transportsList);
	/*Lista_Vehicule = ROBOT_FILE_NAME*/
	//PersistXMLFile(Lista_Vehicule_XML, transportsList);
	PersistBinaryFile(Lista_Vehicule_BIN, transportsList);
}

void Persistance::UpdateTransport(Vehicule^ transport) {
	for (int i = 0; i < transportsList->Count; i++) {
		if (transportsList[i]->Id == transport->Id)
			transportsList[i] = transport;
	}
	//PersistTextFile(Lista_Vehicule, transportsList);
	/*Lista_Vehicule = ROBOT_FILE_NAME*/
	//PersistXMLFile(Lista_Vehicule_XML, transportsList);
	PersistBinaryFile(Lista_Vehicule_BIN, transportsList);
}

void Persistance::DeleteTransport(int transportId) {
	for (int i = 0; i < transportsList->Count; i++) {
		if (transportsList[i]->Id == transportId)
			transportsList->RemoveAt(i);
	}
	//PersistTextFile(Lista_Vehicule, transportsList);
	/*Lista_Vehicule = ROBOT_FILE_NAME*/
	//PersistXMLFile(Lista_Vehicule_XML, transportsList);
	PersistBinaryFile(Lista_Vehicule_BIN, transportsList);
}

//LoadTextFile devuelve un puntero Object mientras que el metodo QueryAllTransports devuelve una lista de punteros a Vehicule
//Por eso, en lugar de poner List<Vehicule^>, ponemos List<Vehicule^>^
List<Vehicule^>^ Persistance::QueryAllTransports() {
	//transportsList = (List<Vehicule^>^)LoadTextFile(Lista_Vehicule);
	//transportsList = (List<Vehicule^>^)LoadXMLFile(Lista_Vehicule_XML);
	transportsList = (List<Vehicule^>^)LoadBinaryFile(Lista_Vehicule_BIN);

	return transportsList;
}

Vehicule^ Persistance::QueryTransportById(int transportId) {
	//transportsList = (List<Vehicule^>^)LoadTextFile(Lista_Vehicule);
	//transportsList = (List<Vehicule^>^)LoadXMLFile(Lista_Vehicule_XML);
	transportsList = (List<Vehicule^>^)LoadBinaryFile(Lista_Vehicule_BIN);
	for (int i = 0; i < transportsList->Count; i++) {
		if (transportsList[i]->Id == transportId)
			return transportsList[i];
	}

	return nullptr;
}