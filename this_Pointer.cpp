/*
    Name:- Vinay Dhake
    PRN:- 202401110031
    Topic:- 'this' Pointer

    Definition:
        In C++, the this pointer is a special pointer that is used inside a class.
        It points to the object that is currently calling the function.
        Simply, this means "the current object".

    Applications:
        1. To tell the compiler that we are talking about the object's variable, not the local variable.
        2. To return the current object from a function.

    Advantages:
        1. Avoids confusion between local and object variables.
        2. Makes the code more clear and easy to understand.
        3. Helps in returning and working with the same object.
*/

#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void setData(int roll, string name)
    {
        this->roll = roll; // 'this' refers to the current object
        this->name = name;
    }

    void display()
    {
        cout << "Roll Number: " << this->roll << endl;
        cout << "Name: " << this->name << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.setData(1, "Vinay");
    s2.setData(2, "Radhika");

    s1.display();
    s2.display();

    return 0;
}

// Output
/*
Roll Number: 1
Name: Vinay
Roll Number: 2
Name: Radhika
*/