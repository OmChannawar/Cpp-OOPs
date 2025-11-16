/*
    Name: Ayushi Karlekar
    PRN: 202401110035
    Topic: Function Overriding

    Definition:
    Function Overriding occurs when a derived (child) class defines a function
    with the same name, parameters, and return type as a function in its base (parent) class.
    The child’s version of the function replaces the parent’s version when called
    through a child object.

    It allows customization and extension of inherited behavior in class hierarchies.
    Example:
        Parent says:  "I am a generic vehicle."
        Child says:   "I am a car driving on the road!"

    Applications:
    • Game Development – Different characters override attack or move behaviors.
    • Banking Systems – Different account types override interest calculation functions.
    • Transportation Systems – Different vehicles override their start() methods.
    • GUI Applications – Different buttons override click behavior.

    Advantages:
    • Customization – Each derived class can modify or redefine parent behavior.
    • Reusability – Base code remains common, reducing duplication.
    • Polymorphism – Same function call behaves differently for each class.
    • Clarity – Organizes and separates behavior logically per class.
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle
{
protected:
    string brand;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void start()
    {
        cout << brand << " vehicle is starting in a general way." << endl;
    }
};

// Derived Class 1
class Car : public Vehicle
{
public:
    void start()
    {
        cout << brand << " car starts with an ignition key and engine roar!" << endl;
    }
};

// Derived Class 2
class Airplane : public Vehicle
{
public:
    void start()
    {
        cout << brand << " airplane starts with jet engines and runway acceleration!" << endl;
    }
};

// Main Function
int main()
{
    cout << "--- Function Overriding Example ---" << endl;

    Vehicle v1;
    v1.setBrand("Generic");
    v1.start(); // Calls Vehicle’s version

    Car c1;
    c1.setBrand("Tesla");
    c1.start(); // Calls Car’s overridden version

    Airplane a1;
    a1.setBrand("Boeing");
    a1.start(); // Calls Airplane’s overridden version

    return 0;
}

/*
    Sample Output:

    --- Function Overriding Example ---
    Generic vehicle is starting in a general way.
    Tesla car starts with an ignition key and engine roar!
    Boeing airplane starts with jet engines and runway acceleration.
*/