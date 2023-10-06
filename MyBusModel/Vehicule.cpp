#include "Vehicule.h"

using namespace MyBusModel;

Vehicule::Vehicule() {

}

Vehicule::Vehicule(int Id, String^ Company, String^ Type, String^ License_Plate, double SpeedMax,
    String^ Comments, double Tariff, String^ Condition, double TimeStart, double TimeArrival,
    String^ Claims, double TimeBusToBus, double TimeFinish, String^ PaymentMethods) {
    this->Id = Id;
    this->Company = Company;
    this->Type = Type;
    this->License_Plate = License_Plate;
    this->SpeedMax = SpeedMax;
    this->Comments = Comments;
    this->Tariff = Tariff;
    this->Condition = Condition;
    this->TimeStart = TimeStart;
    this->TimeArrival = TimeArrival;
    this->Claims = Claims;
    this->TimeBusToBus = TimeBusToBus;
    this->TimeFinish = TimeFinish;
    this->PaymentMethods = PaymentMethods;
}