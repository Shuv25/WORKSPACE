// write a program to recieve two no as range and print all the tables within that range.

#include <iostream>

using namespace std;

class table
{
public:
    int lower, upper;

    table(int x, int y)
    {
        lower = x;
        upper = y;
    }

    void printable()
    {
        for (int i = lower; i <= upper; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cout << i << "X" << j << "=" << i * j << endl;
            }
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter the first no:";
    cin >> a;
    cout << "Enter the second no:";
    cin >> b;

    table t1(a, b);

    t1.printable();
}