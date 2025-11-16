/*
    Name:- Pratik Mane
    PRN:- 202401110033
    Topic:- Class & Object


    Definition
        - In Object-Oriented Programming (OOP), a class is a user-defined data type
          that contains both data (variables) and functions (methods).
        - An object is an instance of a class — it represents a real-world entity.
        - A class defines the structure, and objects are created from that structure.

    Applications
        - Software Design: Used to model systems like banking, library, and hospital management.
        - Game Development: Entities such as players, enemies, and weapons are represented as objects.
        - Data Management: Simplifies handling of large, related data sets.
        - Reusability: Classes can be reused across multiple programs or projects.
        - Simulation and AI: Used to simulate real-world entities like cars, robots, or sensors.

    Advantages
        - Code Reusability: One class can create multiple objects or be reused elsewhere.
        - Encapsulation: Protects data by restricting direct access.
        - Modularity: Divides complex code into manageable components.
        - Easy Maintenance: Updating one class doesn’t affect others.
        - Inheritance: Allows one class to reuse properties and functions of another.
        - Polymorphism: Enables functions or operators to behave differently for different objects.
*/

// Program on Class & Object
#include <iostream>
#include <string>
using namespace std;

// Class definition
class Student
{
private:
    string name;
    int age;
    float marks;

public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
        marks = 0.0;
    }

    // Parameterized constructor
    Student(string n, int a, float m)
    {
        name = n;
        age = a;
        marks = m;
    }

    // Function to set student data
    void setData(string n, int a, float m)
    {
        name = n;
        age = a;
        marks = m;
    }

    // Function to display student data
    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function to check if student passed or failed
    void checkResult()
    {
        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }

    // Destructor (automatically called at end of program)
    ~Student()
    {
        cout << "\nDestructor called for student: " << name << endl;
    }
};

// Main function
int main()
{
    cout << "***** Program on Class and Object *****\n";

    // Creating object using default constructor
    Student s1;
    cout << "\nObject 1 (Default Constructor):";
    s1.display();

    // Creating object using parameterized constructor
    Student s2("Rahul", 20, 88.5);
    cout << "\nObject 2 (Parameterized Constructor):";
    s2.display();
    s2.checkResult();

    // Creating another object and setting data using function
    Student s3;
    string n;
    int a;
    float m;

    cout << "\nEnter details for another student:\n";
    cout << "Enter Name: ";
    cin >> n;
    cout << "Enter Age: ";
    cin >> a;
    cout << "Enter Marks: ";
    cin >> m;

    s3.setData(n, a, m);
    s3.display();
    s3.checkResult();

    cout << "\nEnd of program.\n";
    return 0;
}

/*
OUTPUT (Example):

***** Program on Class and Object *****

Object 1 (Default Constructor):
--- Student Details ---
Name: Unknown
Age: 0
Marks: 0
Result: Fail

Object 2 (Parameterized Constructor):
--- Student Details ---
Name: Rahul
Age: 20
Marks: 88.5
Result: Pass

Enter details for another student:
Enter Name: Aman
Enter Age: 19
Enter Marks: 45

--- Student Details ---
Name: Aman
Age: 19
Marks: 45
Result: Pass

End of program.

Destructor called for student: Aman
Destructor called for student: Rahul
Destructor called for student: Unknown
*/