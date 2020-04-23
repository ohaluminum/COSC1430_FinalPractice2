#include <iostream>
#include <string>
#include "Garage.h"
#include "Car.h"


//Parameterized constructor
Garage::Garage(string newLocation)
{
    location = newLocation;
    numOfVehicles = 0;
}

//Destructor
Garage::~Garage()
{
    for (int i = 0; i < numOfVehicles; i++)
    {
        delete vehicles[i];
        vehicles[i] = nullptr;
    }
}

//Getters
string Garage::getLocation()
{
    return location;
}

int Garage::getNumofVehicles()
{
    return numOfVehicles;
}

//Overloaded operator ==
bool Garage::operator==(Garage& obj)
{
    if (location.compare(obj.location) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Function to add a new element to vehicles
//Note that new dynamic memory needs to be allocated correctly 
//for a Vehicle object or for a Car object based on the value of the boolean variable passed in.
bool Garage::addVehicle(Vehicle& obj, bool isACar)
{
    if (numOfVehicles < 100)
    {
        if (isACar)
        {
            vehicles[numOfVehicles] = new Car((Car&) obj);
            numOfVehicles++;
            return true;
        }
        else
        {
            vehicles[numOfVehicles] = new Vehicle(obj);
            numOfVehicles++;
            return true;
        }
    }
    else
    {
        return false;
    }
}

//Function to remove a vehicle from the garage
bool Garage::removeVehicle(string objRegId)
{
    int index = -1;

    for (int i = 0; i < numOfVehicles; i++)
    {
        if (vehicles[i]->getRegID() == objRegId)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        Vehicle* temp = vehicles[index];

        for (int i = index; i < numOfVehicles - 1; i++)
        {
            vehicles[i] = vehicles[i + 1];
        }

        delete temp;
        numOfVehicles--;

        return true;
    }
    return false;
}

//Function to print all of the private members of all of the vehicles in vehicles
void Garage::print()
{
    for (int i = 0; i < numOfVehicles; i++)
    {
        vehicles[i]->print();
    }
}
