#include <iostream>

using namespace std;

class A
{
protected:
    int amount;

public:
    void input()
    {
        amount = 10384637;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << amount << endl;
    }
};
int main()
{
    B jack;
    jack.input();
    jack.show();
}