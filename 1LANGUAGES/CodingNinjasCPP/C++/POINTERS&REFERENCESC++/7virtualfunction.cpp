#include <iostream>

using namespace std;

class Base
{
public:
    virtual void func()
    {
        cout << "Base Class" << endl;
    }
};

class derived : public Base
{
public:
    void func()
    {
        cout << "Derived Class" << endl;
    }
};

int main()
{
    Base *p;
    derived obj;
    p = &obj;
    p->func();
}