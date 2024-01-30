#include <iostream>

using namespace std;

void findDuplicates(int arr[], int len)
{
    bool ifPresent = false;
    int tempLen = 0;
    int tempArr[len];

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                ifPresent = false;

                for (int k = 0; k < tempLen; k++)
                {
                    if (tempArr[k] == arr[i])
                    {
                        ifPresent = true;
                        break;
                    }
                }

                if (!ifPresent)
                {
                    tempArr[tempLen] = arr[i];
                    tempLen++;
                }
            }
        }
    }

    if (tempLen > 0)
    {
        cout << "Duplicate elements: ";

        for (int i = 0; i < tempLen; i++)
        {
            cout << tempArr[i] << " ";
        }
    }
    else
    {
        cout << "No duplicates found in the array.";
    }
}

int main()
{
    int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11, 12, 11, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
