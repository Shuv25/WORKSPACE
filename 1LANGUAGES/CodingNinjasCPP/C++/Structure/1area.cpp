#include <iostream>

using namespace std;

struct area
{
    int x, y;

    void print()
    {
        cout << x * y << endl;
    }
};

int main()
{
    struct area a1;
    a1.x = 10;
    a1.y = 20;
    a1.print();
}