#include <iostream>

using namespace std;

class A
{
    int a, b;

public:
    A() // default constructor
    {
        a = 20;
        b = 30;
        cout << a << " " << b << endl;
    }

    ~A()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    A obj;
}