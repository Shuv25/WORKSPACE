#include <iostream>

using namespace std;

class test
{

private:
    int n;

public:
    test() // default constractor
    {
        cout << "Default Constractor is called" << endl;
    }

    test(int num) // perametarized constractor
    {
        n = num;
    }

    void display()
    {
        cout << n << endl;
    }
};

int main()
{
    test t1, t2(25);
    t2.display();
}