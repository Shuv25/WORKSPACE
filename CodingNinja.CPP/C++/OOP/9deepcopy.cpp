#include <iostream>

using namespace std;

class A
{
    int a, b, *p;

public:
    A() // constractor
    {
        p = new int;
    }
    A(A &ref) // copy constractor
    {
        a = ref.a;
        b = ref.b;
        p = new int;
        *p = *(ref.p);
    }

    void getData(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }

    void showData()
    {
        cout << a << " " << b << " " << *p << endl;
    }
};

int main()
{
    A a1;
    a1.getData(1, 2, 3);
    a1.showData();

    A a2 = a1;
    a2.showData();
}