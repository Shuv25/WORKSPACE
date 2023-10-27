#include <iostream>

using namespace std;

class A
{
public:
    int x, y;

    A(int a, int b) // copy constractor
    {
        x = a;
        y = b;
    }

    A(A &ref)
    {
        x = ref.x;
        y = ref.y;

        cout << x << " " << y << endl;
    }
};

int main()
{
    A obj(5, 6);
    A obj2 = obj;
}