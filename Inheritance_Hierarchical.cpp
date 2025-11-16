/*
    Name: Arjun Mankuskar
    PRN: 202401110038
    Topic: Hierarchical Inheritance

    Definition:
        - Hierarchical Inheritance is when a single base (parent) class
          is inherited by multiple derived (child) classes.
        - It forms a "one-to-many" relationship — all child classes share
          common properties and functions from the same parent but can
          also define their own unique features.

    Applications:
        - Employees System:
            Parent: Employee (name, ID)
            Children: Manager, Engineer, Intern
        - Vehicles:
            Parent: Vehicle (brand, startEngine())
            Children: Car, Truck, Motorcycle
        - Shapes:
            Parent: Shape (color, getArea())
            Children: Circle, Rectangle, Triangle

    Advantages:
        - Code Reusability: Shared code is written once in the parent class.
        - Easy Maintenance: Fixing code in the parent updates all child classes.
        - Clear Hierarchy: Shows logical “is-a” relationships.
        - Organized Structure: Keeps similar entities grouped and reduces redundancy.
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee
{
protected:
    string name;
    int employeeID;

public:
    void setData(string n, int id)
    {
        name = n;
        employeeID = id;
    }

    void showInfo()
    {
        cout << "Name: " << name << ", ID: " << employeeID << endl;
    }
};

// Derived Class 1
class Manager : public Employee
{
public:
    void conductMeeting()
    {
        cout << "Manager " << name << " is conducting a team meeting." << endl;
    }
};

// Derived Class 2
class Engineer : public Employee
{
public:
    void writeCode()
    {
        cout << "Engineer " << name << " is writing C++ code." << endl;
    }
};

// Main Function
int main()
{
    cout << "--- Manager's Details ---" << endl;
    Manager mgr1;
    mgr1.setData("Alice Smith", 101);
    mgr1.showInfo();
    mgr1.conductMeeting();

    cout << "\n--- Engineer's Details ---" << endl;
    Engineer eng1;
    eng1.setData("Bob Johnson", 202);
    eng1.showInfo();
    eng1.writeCode();

    return 0;
}

/*
    Output:

    --- Manager's Details ---
    Name: Alice Smith, ID: 101
    Manager Alice Smith is conducting a team meeting.

    --- Engineer's Details ---
    Name: Bob Johnson, ID: 202
    Engineer Bob Johnson is writing C++ code.
*/