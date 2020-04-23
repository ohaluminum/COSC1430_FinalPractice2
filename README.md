# COSC1430_FinalPractice2

### Inheritance

:exclamation::grey_exclamation: An important point is Downcatsing!! 

:herb: Details about downcasting example is in `addVehicle()` function!

> In this exercise, you are implementing a parking garage that can park different vehicles. You will need the following three classes to finish this exercise.

#### Vehicle class: 

*private:*

- A string member variable, named `regid`

*public:*

- A constructor with one parameter that sets `regid`

- An accessor and a mutator for `regid`

- An empty virtual destructor

- A `print` function that outputs the registration information of the vehicle in the following format.

```
cout << "Vehicle Registration: " << /*var name*/ << endl;
```
#### Car class: 

> This class inherits from the class Vehicle (using public inheritance) and adds the following members.

*private:*

- A string variable, named `color`

- A string variable, named `make`

- A string variable, named `model`

- An integer, named `year`

*public:*

- A constructor with parameters: `string regid, string color, int year, string make, and string model.`

- Getters/accessors and setters/mutators of the above member variables

- Overwrite the `print` function to show the information of the car in the standard output using the following cout statement:

```
cout << "Car Registration: " << /*var name*/ << ", Color = " 
     << /*var name*/ << ", Year = " << /*var name*/ << ", Make = " 
     << /*varname*/ << ", Model = " << /*var name*/ << endl;
```
#### Garage class: 

> This class uses an array to store a number of vehicles and supports the addition and removal of a vehicle from the array.

*private:*

- A 1D array of the pointer type of Vehicle with fixed size of 100, named `vehicles`

- A string variable, named `location`, to store the address of the garage

- An integer, named `numOfVehicles`, to store the current numbers of vehicles in the garage

*public:*

- A constructor with a parameter of type string representing the location of the garage.

- A destructor that proper releases the memory of the vehicle/car objects associated with the elements in the pointer array

- Overload the operator == (comparing the attribute `location`). 

> If the information stored in `location` is identical for both garage objects, return true; otherwise, return false.

- Create a boolean function called `addVehicle`

> It receives a reference to a Vehicle object and a boolean variable to mark whether the Vehicle object passed in is a car or not (true for a Car object and false for a Vehicle object). 

> This function should check whether the garage is full or not, (`numOfVehicles` is equal to or greater than 100 or not) before adding a new vehicle. If there is room, add the object to the first available position in the array. 

> ***Note that new dynamic memory needs to be allocated correctly (for a Vehicle object or for a Car object based on the value of the boolean variable passed in). If the operation is successful, addVehicle will return true, false otherwise.***

***The following functions are provided to you***

- The getters/accessors for `location` and `numOfVehicles`.

- A function called `removeVehicle`, that receives a string with the `regid`, and returns a boolean value.

- A `print` function to show the information about all the vehicles in the garage 

> ***Note that the information that will be printed out depends on the type of objects that the current pointer element is associated with.*** 

> ***That is, if it is a Car object, the print function of the Car class should be called, otherwise, the print function of Vehicle class should be called.*** 

> ***Hint: a small but crucial addition to the Vehicle class is necessary to achieve this.***
