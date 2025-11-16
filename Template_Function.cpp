/*
    Name:- Gunjan Balapure
    PRN:- 202401110027
    Topic:- Template Function


    Theory:
        Template Function:
            A template function allows writing a function that can work with any data type.
            It uses a placeholder type (like class T or typename T) which is replaced by the
            actual data type at the time of function call.

    Applications:
        • Used to write generic functions.
        • Useful in data structures (stack, queue, linked list).
        • Helps to reduce code repetition.

    Advantages:
        • Code reusability.
        • Less redundancy.
        • Easy to maintain.

    Syntax:
        template <class T>        // OR template <typename T>
        T functionName(T a, T b)  // Return type T & parameters of type T
        {
            // body of the function

            return //some value of type T;
        }
*/

#include <iostream>
using namespace std;

template <class T>
T addValue(T x, T y)
{
    return x + y;
}

int main()
{
    cout << "Integer Addition = " << addValue(10, 20) << endl;
    cout << "Float Addition = " << addValue(5.5f, 3.2f) << endl;
    return 0;
}

/* OUTPUT:

Integer Addition = 30
Float Addition = 8.7

*/