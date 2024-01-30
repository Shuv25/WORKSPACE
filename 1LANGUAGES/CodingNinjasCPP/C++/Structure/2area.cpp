#include <iostream>

using namespace std;

struct circle
{
    int r;
    circle(int x)
    {
        r = x;
    }
    void output()
    {
        cout << 3.14 * r * r << endl;
    }
};

int main()
{
    struct circle c1 = circle(5);
    c1.output();
}