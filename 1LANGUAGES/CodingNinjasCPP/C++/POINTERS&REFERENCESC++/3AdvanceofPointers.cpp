#include <iostream>

using namespace std;

void update(int **p2)
{
    **p2 = **p2 + 1;
}

int main()
{
    int i = 5;
    int *p = &i;   // store the adress of i
    int **p2 = &p; // store the adress of p

    cout << p << endl;    // will print the address of i
    cout << *p << endl;   // will print the value of i
    cout << &p << endl;   // will print the address of p
    cout << p2 << endl;   // will print the address of p
    cout << *p2 << endl;  // will print the address of i
    cout << **p2 << endl; // will print the value of i
    cout << &p2 << endl;  // will print the address of p2

    cout << endl;

    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    update(p2);
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
}