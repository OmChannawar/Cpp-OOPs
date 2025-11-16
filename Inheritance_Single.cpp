/*
    Name: Vishal Shende
    PRN: 202401110034
    Topic: Single Inheritance

    Definition:
        Single inheritance in C++ means a derived class has exactly one direct base class.
        In other words, each subclass (child) inherits from only one superclass (parent).

    Advantages:
        1. Code Reusability: You can use existing code from the base class without rewriting it.
        2. Simplicity: It is easy to understand since there’s only one parent class.
        3. Easy Maintenance: Changes made in the base class automatically apply to the derived class.

    Application:
        1. Vehicle Hierarchy:
            Base Class: Vehicle (with common attributes like speed, color, and methods like
                        startEngine(), stopEngine()).
            Derived Class: Car (inherits from Vehicle and adds specific attributes like
                           numDoors, fuelType, and methods like drive()).
            Application: This models the real-world concept that a car is a vehicle, sharing
                        core functionalities while having its own unique characteristics.

        2. Animal Kingdom Simulation:
            Base Class: Animal (with common attributes like species, age, and methods like
                        eat(), sleep()).
            Derived Class: Dog (inherits from Animal and adds specific attributes like breed,
                           and methods like bark(), fetch()).
            Application: Representing biological hierarchies where specific animals inherit
                         general animal traits.

*/

#include <iostream>
using namespace std;

// Base class
class BankAccount
{
protected:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double bal)
    {
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: Rs." << amount << endl;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

// Derived class (Single Inheritance)
class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(string name, double bal, double rate)
        : BankAccount(name, bal)
    {
        interestRate = rate;
    }

    void addInterest()
    {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest added: Rs." << interest << endl;
    }
};

int main()
{
    SavingsAccount acc("Vishal Shende", 5000, 5.0);

    acc.display();
    acc.deposit(2000);
    acc.addInterest();
    acc.display();

    return 0;
}

/*
Output:

Account Holder: Vishal Shende
Balance: Rs.5000
Deposited: Rs.2000
Interest added: Rs.350
Account Holder: Vishal Shende
Balance: Rs.7350
*/