#include <bits/stdc++.h>

using namespace std;

void insertionsort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > k)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = k;
    }
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Entre the elments of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}