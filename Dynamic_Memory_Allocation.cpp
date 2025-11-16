/*
    Name: Tanuja Nikam
    PRN: 202401110048
    Topic: Dynamic Memory Allocation

    Definition:
    Dynamic Memory Allocation means assigning memory to variables at runtime
    instead of compile time. It allows programs to request memory from the heap
    when needed and release it when no longer required.

    In C++, the `new` operator is used to allocate memory dynamically,
    and the `delete` operator is used to free (release) that allocated memory.

    Applications:
    • Used when the size of data is not known during compile time.
    • Common in applications involving arrays, linked lists, trees, and graphs.
    • Helps manage memory efficiently in real-time systems.
    • Useful for handling large or variable-sized datasets.

    Advantages:
    • Efficient memory usage – allocates only when needed.
    • Avoids wastage of memory resources.
    • Provides flexibility to handle data of dynamic size.
    • Prevents stack overflow by using heap memory for large objects.
*/

#include <iostream>
using namespace std;

// Class demonstrating Dynamic Memory Allocation
class Student
{
    string name;
    int *marks; // Pointer for dynamically allocated memory

public:
    // Constructor: allocate memory at runtime
    Student(string n, int m)
    {
        name = n;
        marks = new int(m); // dynamic allocation using 'new'
    }

    // Function to display student details
    void show()
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << *marks << endl;
    }

    // Destructor: free allocated memory
    ~Student()
    {
        delete marks; // releasing memory using 'delete'
        cout << "Memory released for " << name << endl;
    }
};

// Main Function
int main()
{
    Student s1("Tanuja", 95);
    s1.show();
    return 0;
}

/*
    Sample Output:

    Student Name: Tanuja
    Marks: 95
    Memory released for Tanuja
*/