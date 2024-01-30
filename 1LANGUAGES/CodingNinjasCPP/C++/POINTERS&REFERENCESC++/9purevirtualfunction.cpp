#include <iostream>

using namespace std;

class base
{
public:
    virtual void getarea() = 0;
};

class triangle : public base
{
public:
    void getarea()
    {
        int r;
        cout << "Enter the radius of the triangle:";
        cin >> r;
        cout << "Area of the triangle:" << (3.14 * r * r) << endl;
    }
};

int main()
{
    triangle t3;
    t3.getarea();
}