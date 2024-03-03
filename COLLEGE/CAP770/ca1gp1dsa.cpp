#include <iostream>

using namespace std;

void insertatfirst(int *arr, int &n, int k)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    n++;
    arr[0] = k;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteatpos(int *arr, int n, int ele)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            break;
        }
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Size? ";
    cin >> n;

    int *arr = new int[n];
    cout << "entre the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the element you want to insert at first:";
    cin >> k;

    insertatfirst(arr, n, k);
    cout << endl;

    int ele;
    cout << "entre the ele you want to delete:";
    cin >> ele;

    deleteatpos(arr, n, ele);
}