#include <iostream>

using namespace std;

int main()
{
    int a[9] = {1, 3, 6, 2, 5, 4, 3, 2, 4};

    int target = 8;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] + a[j] == target || (a[i] - a[j]) * (-1) == target)
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
    return 0;
}