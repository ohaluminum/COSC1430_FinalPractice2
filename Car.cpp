#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

//Default constructor
Car::Car() : Vehicle(), color(""), year(0), make(""), model("")
{

}

//Parameterized constructor
Car::Car(string NewRegID, string newColor, int newYear, string newMake, string newModel) : Vehicle(NewRegID), color(newColor), year(newYear), make(newMake), model(newModel)
{

}

//Destructor
Car::~Car()
{

}

//Functions getter
string Car::getColor()
{ 
	return color; 
}

int Car::getYear() 
{ 
	return year; 
}

string Car::getMake() 
{ 
	return make; 
}

string Car::getModel() 
{ 
	return model; 
}

//Functions setter
void Car::setColor(string newColor) 
{ 
	color = newColor; 
}

void Car::setYear(int newYear) 
{ 
	year = newYear; 
}

void Car::setMake(string newMake) 
{ 
	make = newMake; 
}

void Car::setModel(string newModel) 
{ 
	model = newModel; 
}

//Function print()
void Car::print()
{
	cout << "Reg_ID = " << getRegID() << ", Color = " << color << ", Year = " << year << ", Make = " << make << ", Model = " << model << endl;
}