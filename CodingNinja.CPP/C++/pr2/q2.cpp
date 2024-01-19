// Write a c++ program to show the re-throwing of exception in it
#include <iostream>
#include <stdexcept>

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
            throw runtime_error("Division by zero");
        }
        c = a / b;
        cout << "Result:" << c << endl;
    }
    catch (const exception &e)
    {
        cout << "Caught exception: " << e.what() << endl;
        throw;
    }
    catch (int x)
    {
        cout << "Cannot divide any num by " << x << endl;
    }

    return 0;
}
