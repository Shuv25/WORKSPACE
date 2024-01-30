#include <iostream>

using namespace std;

class A
{
public:
    A(int a, int b) // perameterized constractor
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    A obj = A(5, 6);
}