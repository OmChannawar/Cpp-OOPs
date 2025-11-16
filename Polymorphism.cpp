/*
    Name: Sanika Mane
    PRN: 202401110047
    Topic: Polymorphism through Multiple Inheritance

    Definition:
        Polymorphism means “many forms.” It is one of the main pillars of Object-Oriented Programming (OOP).
        It allows a single interface to represent different underlying forms (data types or behaviors).

        There are two main types:
            • Compile-Time Polymorphism – achieved using Function Overloading or Operator Overloading.
            • Runtime Polymorphism – achieved using Function Overriding with virtual functions.

        Multiple Inheritance is a form of polymorphism where a single derived class inherits
        properties and behaviors from two or more base classes.
        This enables one object to exhibit multiple behaviors.

    Applications:
        • Designing hybrid systems such as amphibious vehicles (land + water vehicles).
        • Used in robotics where a robot can exhibit multiple capabilities from different base modules.
        • In GUI frameworks where a widget can inherit properties from multiple parent interfaces.
        • In game development where an entity inherits from multiple behavior classes
          (e.g., Moveable, Drawable).

    Advantages:
        • Promotes code reusability by combining features of multiple base classes.
        • Enhances flexibility and functionality in class design.
        • Demonstrates polymorphic behavior — one object can take multiple forms.
        • Reduces code duplication by inheriting common functionalities from existing classes.
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class 1
// This class represents a land vehicle and has its own data and behavior.
class Car
{
public:
    string vehicleType = "Land Vehicle";

    void drive()
    {
        cout << "Vehicle is driving on the road." << endl;
    }
};

// Base Class 2
// This class represents a water vehicle and has its own data and behavior.
class Boat
{
public:
    string watercraftType = "Water Vehicle";

    void sail()
    {
        cout << "Vehicle is sailing on the water." << endl;
    }
};

// Derived Class demonstrating Multiple Inheritance
class Amphibious : public Car, public Boat
{
public:
    void switch_mode()
    {
        cout << "Switching from land to water mode..." << endl;
    }
};

// Main Function
int main()
{
    Amphibious a;

    cout << "--- Polymorphism through Multiple Inheritance ---" << endl;

    // Accessing Car class members
    cout << "Car Type: " << a.vehicleType << endl;
    a.drive();

    // Accessing Boat class members
    cout << "Boat Type: " << a.watercraftType << endl;
    a.sail();

    // Accessing Amphibious class member
    a.switch_mode();

    return 0;
}

/*
    Sample Output:

    --- Polymorphism through Multiple Inheritance ---
    Car Type: Land Vehicle
    Vehicle is driving on the road.
    Boat Type: Water Vehicle
    Vehicle is sailing on the water.
    Switching from land to water mode...
*/