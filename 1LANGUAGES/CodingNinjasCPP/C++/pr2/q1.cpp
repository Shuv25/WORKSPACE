// Template banana hai ek jisme array paas karke
// Uska smallest number nikaalna haj

#include <iostream>

using namespace std;

template <class T>
T smallest(T arr[], T n)
{
    int small = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    return small;
}

int main()
{
    int m;
    cout << "Enter the size of the array:";
    cin >> m;

    int arr[m];

    cout << "Enter the values of array:";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    cout << "The smallest no inside the array is:" << smallest(arr, m);
}