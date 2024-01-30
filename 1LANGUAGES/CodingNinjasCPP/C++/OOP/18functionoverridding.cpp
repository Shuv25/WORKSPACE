#include <iostream>

using namespace std;

class A
{
public:
    void message()
    {
        cout << "Hello good morning" << endl;
    }
};

class B : public A
{
public:
    void message()
    {
        cout << "Bye guys" << endl;
    }
};

int main()
{
    A *p;
    B o1;

    p = &o1;
    p->message();
    o1.message();
}
