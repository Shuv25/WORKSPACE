#include <iostream>

using namespace std;

class a
{
public:
    void fun()
    {
        cout << "a" << endl;
    }
};
class b
{
public:
    void fun()
    {
        cout << "b" << endl;
    }
};
class c : public a, public b
{
};
int main()
{
    c c1;
    c1.a::fun();
    c1.b::fun();
}