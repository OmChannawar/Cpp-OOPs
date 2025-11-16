/*
    Name:- Abhishek Gaikwad
    PRN:- 202401110037
    Topic:- Friend Class and Friend Function

    Definition:
        In C++, the 'friend' keyword allows a class or a function to access
        the private and protected members of another class.
        It is used when two classes or a class and a function need to share data.

        There are two types:
        1) Friend Function – a normal (non-member) function which can access private data.
        2) Friend Class – a class whose all functions can access private members of another class.

    Application:
        Friend class and function are used in situations like:
        - Operator overloading
        - When two classes need to work closely together
        - To perform debugging or data checking

    Advantages:
        - Helps in sharing private data safely.
        - Useful when classes are related.
        - Makes communication between classes easier.
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 5000;
    }

    friend class Auditor;
};

class Auditor
{
public:
    void checkAccount(BankAccount acc)
    {
        cout << "Auditor verifying account balance: Rs. " << acc.balance << endl;
    }
};

int main()
{
    BankAccount acc;
    Auditor audit;

    audit.checkAccount(acc);

    return 0;
}

/*
OUTPUT:

Auditor verifying account balance: Rs. 5000
*/