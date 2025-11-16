/*
    Name:- Shashank Niswade
    PRN:- 202401110041
    Topic:- Function Overloading

    Definition:
        It is a feature of CPP that allows multiple functions to have the same name 
        but different parameter
        The compiler decides which function to call based on the arguments passed

    Applications:
        1. Makes the code more reusable and efficient
        2. Helps in writing cleaner and more readable programs
        3. Allows a single function name to handle various types of data, making the program flexible

    Advantages:
        1. Makes the code simpler and easier to understand
        2. Enables compile-time polymorphism, where decisions are made during compilation
        3. Reduces code duplication and keeps the program well-organized
*/

#include <iostream>
using namespace std;


float area(float radius) {
    cout << "Area of Circle r = 5: " << 3.14 * radius * radius << " sq. units" << endl;
}
float area(float length, float breadth) {
    cout << "Area of Rectangle l = 4, b = 6: " << length * breadth << " sq. units" << endl;
}
float area(float base, float height, bool isTriangle) {
    cout << "Area of Triangle b = 3, h = 7: " << 0.5 * base * height << " sq. units" << endl;
}

int main() {
    area(5.0f);
    area(4.0f, 6.0f);
    area(3.0f, 7.0f,true);

    return 0;
}

/*
OUTPUT:

Area of Circle r = 5: 78.5 sq. units
Area of Rectangle l = 4, b = 6: 24 sq. units
Area of Triangle b = 3, h = 7: 10.5 sq. units
*/