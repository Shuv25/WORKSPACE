// Pointer is a variable which stores the adsress of another variable

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;

    cout << a << endl;  // will print the value of a
    cout << &a << endl; // will print the adsress of the a
    cout << p << endl;  // same as above line of code because it stores the adress of a
    cout << &p << endl; // will print the address of p
    cout << *p << endl; // will print the value of a because here we dereferencing the pointer p
    cout << endl;
    *p = 10; // we are changing the value pf a through pointer pusing dereferencing
    cout << a << endl;
    cout << *p << endl;

    // Pointer Arithmetic
    cout << endl;
    cout << p << endl;
    cout << p + 1 << endl;    // it will add 4 bytes that is 32 bits because it is a int data type
    cout << p + 2 << endl;    // it will add 8 bytes that is 64 bits because it is a int data type
    cout << *(p + 1) << endl; // it wull print some garbage value that we dont define at position of p+1, that is address of a plus 4 bytes.

    // Copying pointer

    cout << endl;
    int *q = p;
    cout << p << "," << *p << endl;
    cout << q << "," << *q << endl;
}