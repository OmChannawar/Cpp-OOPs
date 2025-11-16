/*
    Name: Atulya Mishra
    PRN: 202401110051
    Topic: Hybrid Inheritance

    Definition:
        Hybrid Inheritance is a combination of two or more types of inheritance.
        It often mixes multiple inheritance styles such as:
            • Single Inheritance
            • Multiple Inheritance
            • Hierarchical Inheritance
            • Multilevel Inheritance

        A common example of Hybrid Inheritance in C++ involves:
            - Hierarchical Inheritance: Both 'Student' and 'Employee' inherit from 'Person'.
            - Multiple Inheritance: 'TeachingAssistant' inherits from both 'Student' and 'Employee'.

        This structure forms a diamond-shaped hierarchy, often leading to a problem known as
        the **Diamond Problem** — where the derived class inherits multiple copies of the same
        base class (Person).
        The issue is resolved using **Virtual Inheritance**, which ensures only one shared
        instance of the base class exists in the hierarchy.

    Applications:
        • Used in real-world models where entities share characteristics from multiple sources.
        • Example: A Teaching Assistant is both a Student and an Employee.
        • Common in complex software systems like university management, HR, or multi-role systems.
        • Used in simulations or hybrid models where multiple inheritance types coexist.

    Advantages:
        • Promotes reusability by combining multiple inheritance patterns.
        • Solves redundancy issues using virtual inheritance.
        • Reduces ambiguity in accessing members of shared base classes.
        • Models real-world relationships where a single entity has multiple roles.
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;

public:
    Person(string n = "Unknown") : name(n)
    {
        cout << "Person Constructor called for: " << name << endl;
    }

    void displayIdentity()
    {
        cout << "My name is: " << name << endl;
    }
};

// Derived Class 1 - Virtual Inheritance from Person
class Student : virtual public Person
{
protected:
    string studentID;

public:
    Student(string n = "Student", string id = "S000") : Person(n), studentID(id)
    {
        cout << "Student Constructor called." << endl;
    }

    void displayStudentID()
    {
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived Class 2 - Virtual Inheritance from Person
class Employee : virtual public Person
{
protected:
    string employeeID;

public:
    Employee(string n = "Employee", string id = "E000") : Person(n), employeeID(id)
    {
        cout << "Employee Constructor called." << endl;
    }

    void displayEmployeeID()
    {
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived Class demonstrating Hybrid Inheritance
class TeachingAssistant : public Student, public Employee
{
private:
    string course;

public:
    TeachingAssistant(string n, string sID, string eID, string c)
        : Person(n), Student(n, sID), Employee(n, eID), course(c)
    {
        cout << "TeachingAssistant Constructor called." << endl;
    }

    void displayAllInfo()
    {
        cout << "\n--- Teaching Assistant Details ---" << endl;
        displayIdentity();
        displayStudentID();
        displayEmployeeID();
        cout << "Teaches course: " << course << endl;
        cout << "------------------------------------" << endl;
    }
};

// Main Function
int main()
{
    cout << "Creating a TeachingAssistant object..." << endl;

    TeachingAssistant ta("Aisha Khan", "S12345", "E54321", "Computer Science 101");

    cout << "\n...Object created.\n"
         << endl;

    ta.displayAllInfo();

    return 0;
}

/*
    Sample Output:

    Creating a TeachingAssistant object...
    Person Constructor called for: Aisha Khan
    Student Constructor called.
    Employee Constructor called.
    TeachingAssistant Constructor called.

    ...Object created.

    --- Teaching Assistant Details ---
    My name is: Aisha Khan
    Student ID: S12345
    Employee ID: E54321
    Teaches course: Computer Science 101
    ------------------------------------
*/