#include <iostream>

using namespace std;

class A
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter two numbers:";
        cin >> a >> b;
    }
};

class B : public A
{
protected:
    int c, d;

public:
    void add()
    {
        c = a + b;
        cout << c << endl;
    }
    void sub()
    {
        d = a - b;
        cout << d << endl;
    }
};
class C : public B
{
protected:
    int e;

public:
    void multiplication()
    {
        e = c * d;
        cout << e << endl;
    }
};
int main()
{
    C c1;
    c1.input();
    c1.add();
    c1.sub();
    c1.multiplication();
}