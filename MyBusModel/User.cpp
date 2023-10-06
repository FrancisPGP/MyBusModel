#include "User.h"

using namespace MyBusModel;

User::User() {

}

User::User(int Age, String^ DNI, String^ Name, int Password, int Id) {
	this->Age = Age;
	this->DNI = DNI;
	this->Name = Name;
	this->Password = Password;
	this->Id = Id;
}