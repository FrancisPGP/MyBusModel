#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MyBusModel {
    [Serializable]
    public ref class Vehicule {
    public:
        property int Id;
        property String^ Company;
        property String^ Type;
        property String^ License_Plate;
        property double SpeedMax;
        property String^ Comments;
        property double Tariff;
        property String^ Condition;
        property double TimeStart;
        property double TimeArrival;
        property String^ Claims;
        property double TimeBusToBus;
        property double TimeFinish;
        property String^ PaymentMethods;
    public:
        Vehicule();
        Vehicule(int Id, String^ Company, String^ Type, String^ License_Plate, double SpeedMax, 
            String^ Comments, double Tariff, String^ Condition, double TimeStart, double TimeArrival, 
            String^ Claims, double TimeBusToBus, double TimeFinish, String^ PaymentMethods);
    };
}