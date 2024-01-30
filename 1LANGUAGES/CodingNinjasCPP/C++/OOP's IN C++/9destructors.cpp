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
    }

    ~test()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    test t1(2);
    t1.display();
}