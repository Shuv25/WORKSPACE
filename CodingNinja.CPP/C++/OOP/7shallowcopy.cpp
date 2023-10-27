#include <iostream>

using namespace std;

class A
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " " << b;
    }
};

int main()
{
    A obj;
    obj.setData(1, 2);

    A obj2 = obj; // shallow copy using copy constractor
    obj2.showData();
}