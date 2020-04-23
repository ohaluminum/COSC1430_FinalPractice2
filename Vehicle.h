#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using namespace std;

class Vehicle
{
private:
    string reg_id;

public:
    //Default constructor
    Vehicle();

    //Parameterized constructor
    Vehicle(string newRegID);

    //Explicitly declared virtual destructor
    virtual ~Vehicle() {};

    //Function getter and setter
    string getRegID();

    void setRegId(string newRegID);

    //Function to print the description of a vehicle
    virtual void print();


};

#endif

