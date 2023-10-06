#include "License.h"

using namespace MyBusModel;

License::License() {

}

License::License(String^ Number, String^ Class) {
	this->Number = Number;
	this->Class = Class;
}