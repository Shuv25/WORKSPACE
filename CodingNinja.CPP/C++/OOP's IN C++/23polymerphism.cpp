#include <iostream>

using namespace std;

class A
{
public:
    void message()
    {
        cout << "Hello, Shuv from this side" << endl;
    }

    void message(string name) // function overloading, same function name diffrent parameters
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    A a1;
    a1.message();
    a1.message("Shuv");
}