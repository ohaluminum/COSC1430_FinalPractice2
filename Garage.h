#ifndef GARAGE_H
#define GARAGE_H
#include "Vehicle.h"

class Garage
{
private:
	//Fixed array called vehicles
	Vehicle* vehicles[100];

	//Size of the current amount of elements in the array
	int numOfVehicles;

	//Location
	string location;

public:
	//Parameterized constructor
	Garage(string newLocation);

	//Destructor
	~Garage();

	//Getters
	string getLocation();
	int getNumofVehicles();

	//Overloaded == operator
	bool operator==(Garage& obj);

	//Function to add a new element to myGarage
	bool addVehicle(Vehicle& newVehicle, bool isACar);

	//Function to remove an element to myGarage
	bool removeVehicle(string objRegid);

	//Function to print all of the private members of all of the elements in myGarage
	void print();

};

#endif