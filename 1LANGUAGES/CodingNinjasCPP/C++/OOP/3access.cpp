#include <iostream>

using namespace std;

class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

int main()
{
    A obj;
    // obj.a = 30;because they are private and protected
    // obj.b = 20;
    obj.c = 10;

    // cout << obj.a << endl;
    // cout << obj.b << endl;
    cout << obj.c << endl;
}