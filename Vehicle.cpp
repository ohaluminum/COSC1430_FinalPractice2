#include <iostream>
#include "Vehicle.h"

using namespace std;

//Default constructor
Vehicle::Vehicle()
{
    reg_id = "";
}

//Parameterized constructor
Vehicle::Vehicle(string newRegId)
{

    reg_id = newRegId;
}

//Function getter and setter

string Vehicle::getRegID()
{
    return reg_id;
}


void Vehicle::setRegId(string newRegId)
{
    reg_id = newRegId;
}


//Function to print the description of a vehicle.
void Vehicle::print()
{
    cout << "Vehicle Registration = " << reg_id << endl;
}