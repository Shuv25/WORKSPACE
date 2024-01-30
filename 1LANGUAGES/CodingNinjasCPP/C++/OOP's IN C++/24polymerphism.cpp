#include <iostream>

using namespace std;

class A
{
public:
    int a;

    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;

        cout << "Subtract value2-value1:" << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "bracket overloading" << this->a << endl;
    }
};

int main()
{
    A a1, a2;

    a1.a = 3;
    a2.a = 7;

    a1 + a2;

    a1();
}