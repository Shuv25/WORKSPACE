#include <iostream>

using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base class destructor" << endl;
    }
};
class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived class destructor" << endl;
    }
};
int main()
{
    Base *ptr = new Derived;

    delete ptr;
}