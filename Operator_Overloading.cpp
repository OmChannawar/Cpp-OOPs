/*
    Name: Manmath Maroti Kornule
    PRN: 202401110045
    Topic: Polymorphism (Compile Time) - Operator Overloading

    Definition:
        Operator Overloading is a feature of Compile-Time Polymorphism in C++.
        It allows redefining the behavior of existing operators (+, *, etc.)
        for user-defined data types such as classes and structures.

        This means the same operator can perform different operations depending
        on the type of operands it acts on. It improves readability and allows
        intuitive manipulation of objects.

        In this program, the '+' operator is overloaded in the class `Complex`
        to perform addition of two complex numbers directly using the '+' symbol.

    Applications:
        • Mathematical operations in user-defined data types (Complex numbers, Vectors, Matrices)
        • Simplifies code in graphics, simulations, and AI models
        • Improves readability and supports reusability in mathematical operations

    Advantages:
        • Enhances code clarity and expressiveness
        • Allows intuitive operations on objects (e.g., c1 + c2)
        • Reduces function-call complexity
        • Demonstrates polymorphism at compile time
*/

#include <iostream>
using namespace std;

// Class representing a complex number
class Complex
{
    float real; // Real part
    float imag; // Imaginary part

public:
    // Default Constructor
    Complex() : real(0), imag(0) {}

    // Parameterized Constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload '+' operator
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display the complex number
    void display() const
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

// Main Function
int main()
{
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);

    Complex sum = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();
    cout << "\nSecond Complex Number: ";
    c2.display();

    cout << "\n\nSum = ";
    sum.display();

    cout << endl;
    return 0;
}

/*
    Sample Output:

    Enter real and imaginary part of first complex number: 3 4
    Enter real and imaginary part of second complex number: 8 9

    First Complex Number: 3 + 4i
    Second Complex Number: 8 + 9i

    Sum = 11 + 13i
*/