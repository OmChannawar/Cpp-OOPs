/*
    Name: Amruta Kanse
    PRN: 202401110044
    Topic: Exception Handling in C++

    WHY EXCEPTION HANDLING?
        - Exception handling ensures that a program continues to run smoothly
          even when unexpected situations or errors occur.
        - Without exception handling, a program may crash, terminate abruptly,
          or fail to process requests properly.
        - Common causes of runtime errors include invalid input, division by zero,
          file access failures, or invalid memory operations.

    WHAT IS EXCEPTION HANDLING IN C++?
        - Exception handling in C++ provides a structured way to detect, handle,
          and recover from runtime errors.
        - It prevents program crashes and supports graceful error recovery.
        - Exception handling uses three main keywords: try, throw, and catch.

    TRY BLOCK
        - The 'try' block contains code that might generate an exception.
        - If an exception occurs, control is passed to the appropriate 'catch' block.

        Syntax:
            try
            {
                // Code that might throw an exception
            }

    THROW KEYWORD
        - The 'throw' statement is used to signal that an exception has occurred.
        - It sends (throws) an exception object to be handled by a matching 'catch' block.

        Syntax:
            if (denominator == 0)
            {
                throw 0;  // Throws an integer exception
            }

    CATCH BLOCK
        - A 'catch' block follows the 'try' block and defines how to handle specific exception types.
        - When an exception is thrown, the runtime looks for a matching 'catch' block based on its type.

        Syntax:
            catch (int num_exception)
            {
                cout << "Error: Cannot divide by " << num_exception << endl;
            }

    HOW IT WORKS
    1) Code that may cause an error is written inside a try block.
    2) When an error occurs, a throw statement raises an exception.
    3) Control transfers to the catch block that matches the thrown exception type.
    4) The catch block executes its code to handle the error, allowing the program
       to recover or terminate gracefully.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        int size;
        cout << "\n Enter the size of array: ";
        cin >> size;

        if (size <= 0)
            throw 0;

        int arr[size];
        cout << "\n Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        cout << "\n The elements of array are: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
    catch (int)
    {
        cout << "\n Array size must be greater than 0.\n";
    }

    try
    {
        int n, d;
        cout << "\n\n Enter numerator (n): ";
        cin >> n;
        cout << " Enter denominator (d): ";
        cin >> d;

        if (d == 0)
            throw 0.0;

        cout << "\n Answer = " << n / d;
    }
    catch (double)
    {
        cout << "\n Division by zero is not allowed.\n";
    }

    try
    {
        string input;
        const int maxLength = 10;
        cout << "\n\n Enter a string (max length " << maxLength << "): ";
        cin >> input;

        if (input.length() > maxLength)
            throw string("String too long");
        if (input.length() == 0)
            throw string("String cannot be empty!");
    }
    catch (string msg)
    {
        cout << "\n Invalid string: " << msg << endl;
    }

    cout << "\n End of the code.\n";
    return 0;
}

/* output

 Enter the size of array: 4

 Enter 4 elements:
21 2 41 78

 The elements of array are: 21 2 41 78

 Enter numerator (n): 4
 Enter denominator (d): 0

 Division by zero is not allowed.
# ****even if we entered denominator 0 the rest code get executed****

 Enter a string (max length 10): AMRUTA

 End of the code.

--------------------------------
Process exited after 25.85 seconds with return value 0
Press any key to continue . . .
*/