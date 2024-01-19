#include <iostream>

using namespace std;

int main()
{
    int i = 4;
    try
    {
        cout << "Inside try block" << endl;
        if (i == 1)
        {
            throw 1;
        }
        if (i == 1)
        {
            throw 1;
        }
        if (i == 2)
        {
            throw 2;
        }
        if (i == 3)
        {
            throw 3;
        }
        if (i == 4)
        {
            throw 4;
        }
    }
    catch (int e1)
    {
        cout << "Exception no:" << e1;
    }
    catch (int e2)
    {
        cout << "Exception no:" << e2;
    }
    catch (int e3)
    {
        cout << "Exception no:" << e3;
    }
    catch (int e4)
    {
        cout << "Exception no:" << e4;
    }

    cout << "\nOutside of catch block" << endl;
}