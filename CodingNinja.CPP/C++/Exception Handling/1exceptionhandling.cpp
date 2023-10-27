#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first no:";
    cin >> a;
    cout << "Enter the second no:";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;

        cout << "Result:" << c << endl;
    }
    catch (int x)
    {
        cout << "Cannot evinde any num by " << x << endl;
    }
}