/*
    Name:- Krishna Kushwah
    PRN:- 202401110039
    Topic:- Multilevel Inheritance

    Definition:
        Multilevel Inheritance is a type of inheritance in C++ where a class is derived from another derived class.
        In simple words, it forms a �chain� of inheritance � a base class acts as the parent for one class,
        which in turn acts as the parent for another class.

    Example:
        Class A ? Base Class
        Class B ? Derived from Class A
        Class C ? Derived from Class B

    Applications:
        1. Used to represent hierarchical relationships (like Grandparent ? Parent ? Child).
        2. Helps in reusing code across multiple levels of classes.
        3. Useful in real-world modeling like Employee ? Manager ? Director.

    Advantages:
        1. Promotes code reusability and reduces redundancy.
        2. Improves organization of large programs.
        3. Easier maintenance and extension of existing code.
*/


#include <iostream>
using namespace std;

// Base class
class Grandparent
{
public:
    void displayGrandparent()
    {
        cout << "I am the Grandparent class." << endl;
    }
};

// Derived class from Grandparent
class Parent : public Grandparent
{
public:
    void displayParent()
    {
        cout << "I am the Parent class." << endl;
    }
};

// Derived class from Parent
class Child : public Parent
{
public:
    void displayChild()
    {
        cout << "I am the Child class." << endl;
    }
};

int main()
{
    Child obj;
    obj.displayGrandparent(); // Accessing function from Grandparent class
    obj.displayParent();      // Accessing function from Parent class
    obj.displayChild();       // Accessing function from Child class
    return 0;
}

/*
OUTPUT:
I am the Grandparent class.
I am the Parent class.
I am the Child class.
*/