#include <iostream>

using namespace std;

class test
{
private:
    int n;

public:
    test(int num)
    {
        n = num;
    }
    void display()
    {
        cout << n << endl;
        cout << "Constractor is called" << endl;
    }
    ~test()
    {
        cout << "Destructor is called" << endl;
    }
};