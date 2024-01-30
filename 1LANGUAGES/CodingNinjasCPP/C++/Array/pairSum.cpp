#include <iostream>

using namespace std;

int main()
{
    int a[9] = {1, 3, 6, 2, 5, 4, 3, 2, 4};

    int count = 0;

    int target = 7;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (a[i] + a[j] == target || (a[i] - a[j]) * (-1) == target)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}