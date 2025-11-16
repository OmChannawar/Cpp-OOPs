/*
    Name:- Om Anil Channawar
    PRN:- 202401110044
    Topic:- Multiple Inheritance in C++


    📘 Definition:
    Multiple inheritance is a feature in C++ that allows a class to inherit
    properties and behaviors (data and functions) from two or more base
    classes simultaneously.

    It helps a derived class combine the functionality of multiple parents
        — for example, a SmartCar can inherit from both Engine and GPS classes.


    💡 Theory:
        - The derived class inherits members from more than one base class.
        - Syntax:
            class Derived : public Base1, public Base2 { ... };

    - If two base classes have functions with the same name, ambiguity
    occurs. It can be resolved using the scope resolution operator (::).


    ✅ Advantages:
        1. Code reusability — reuse code from multiple sources.
        2. Rich functionality — combine behaviors from several classes.
        3. Flexibility — model complex real-world relationships.


    🧩 Uses:
        - When a class logically needs features of multiple base classes.
            Example: A Teacher can be both a Person and a Staff member.
        - Common in simulations, games, and large software systems.


    🌍 Real-Life Example:
        A "SmartCar" inherits from both:
            1. Engine → Power & performance features
            2. GPS    → Navigation & tracking features
        The SmartCar combines both functionalities.
*/

// -------- Main Code --------
#include <iostream>
using namespace std;

// -------- Base Class 1 --------
class Engine
{
protected:
    int horsepower;

public:
    void setHorsepower(int hp)
    {
        horsepower = hp;
    }
    void showHorsepower()
    {
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

// -------- Base Class 2 --------
class GPS
{
protected:
    string location;

public:
    void setLocation(string loc)
    {
        location = loc;
    }
    void showLocation()
    {
        cout << "Current GPS Location: " << location << endl;
    }
};

// -------- Derived Class (Multiple Inheritance) --------
class SmartCar : public Engine, public GPS
{
    string model;

public:
    void setModel(string m)
    {
        model = m;
    }
    void showDetails()
    {
        cout << "\n--- SmartCar Details ---" << endl;
        cout << "Model: " << model << endl;
        showHorsepower();
        showLocation();
    }
};

// -------- Main Function --------
int main()
{
    cout << "========= MULTIPLE INHERITANCE EXAMPLE =========\n";

    SmartCar car;
    string modelName, gpsLocation;
    int hp;

    // Taking input from the user
    cout << "Enter Car Model: ";
    getline(cin, modelName);

    cout << "Enter Engine Horsepower: ";
    cin >> hp;
    cin.ignore(); // clear input buffer

    cout << "Enter Current GPS Location: ";
    getline(cin, gpsLocation);

    // Setting user input to object
    car.setModel(modelName);
    car.setHorsepower(hp);
    car.setLocation(gpsLocation);

    // Display Output
    car.showDetails();

    cout << "\n========= PROGRAM SUMMARY =========" << endl;
    cout << "Demonstrated multiple inheritance using Engine & GPS classes.\n";
    cout << "Derived class SmartCar combined both functionalities.\n";
    cout << "Shows reusability and flexibility of C++ inheritance.\n";

    return 0;
}

/* =============>>> OUTPUT <<<============

========= MULTIPLE INHERITANCE EXAMPLE =========
Enter Car Model: Thar
Enter Engine Horsepower: 750
Enter Current GPS Location: Pune

--- SmartCar Details ---
Model: Thar
Engine Horsepower: 750 HP
Current GPS Location: Pune

========= PROGRAM SUMMARY =========
Demonstrated multiple inheritance using Engine & GPS classes.
Derived class SmartCar combined both functionalities.
Shows reusability and flexibility of C++ inheritance.
*/