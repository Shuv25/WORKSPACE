#include <iostream>

using namespace std;

int indexOfFirstOccur(int n, int *arr, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (k > arr[mid])
        {
            low = mid + 1;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int indexOfLastOccur(int n, int *arr, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (k > arr[mid])
        {
            low = mid + 1;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (mid == (n - 1) || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }

    return -1;
}

int countOccur(int n, int *arr, int k)
{
    int first = indexOfFirstOccur(n, arr, k);
    if (first == -1)
    {
        return 0;
    }
    else
    {
        return (indexOfLastOccur(n, arr, k) - first + 1);
    }
}

int main()
{
    int n;
    cout << "Enter the size of tte array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Entre the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the element you want to search:";
    cin >> k;

    int pos = countOccur(n, arr, k);

    cout << "The ocuurence of " << k << " is :" << pos << endl;
}