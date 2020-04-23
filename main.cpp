#include <iostream>
#include <string>
#include "Car.h"
#include "Vehicle.h"
#include "Garage.h"

using namespace std;

int main() {
    Car myCar("1235", "Red", 2020, "Nissan", "Sentra");
    Vehicle myVehicle("1234");

    Garage myGarage("Home");
    myGarage.addVehicle(myVehicle, false);
    myGarage.addVehicle(myCar, true);

    Car myCar2("1236", "Silver", 2014, "Kia", "Rio");
    Vehicle myVehicle2("1237");

    myGarage.addVehicle(myVehicle2, false);
    myGarage.addVehicle(myCar2, true);

    myGarage.removeVehicle("1237");
    myGarage.print();

    return 0;
}