#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	string color;
	int year;
	string make;
	string model;

public:
	//Default constructor
	Car();

	//Parameterized constructor
	Car(string NewRegID, string newColor, int newYear, string newMake, string newModel);
	
	//Functions getter
	string getColor();
	int getYear();
	string getMake();
	string getModel();

	//Functions setter
	void setColor(string newColor);
	void setYear(int newYear);
	void setMake(string newMake);
	void setModel(string newModel);

	//Function print()
	void print();
};

#endif
