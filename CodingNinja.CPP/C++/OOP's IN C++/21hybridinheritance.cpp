#include <iostream>

using namespace std;

class a
{
public:
    void message()
    {
        cout << "Hello" << endl;
    }
};
class d
{
public:
    void name()
    {
        cout << "D" << endl;
    }
};
class b : public a
{
};
class c : public a, public d
{
};

int main()
{
    b b1;
    b1.message();

    c c1;
    c1.message();

    c1.name();
}