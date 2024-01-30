#include <iostream>

using namespace std;

void duplicate(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}

int main()
{

    int n;
    cout << "Enter the size:";
    cin >> n;

    int *a = new int[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    duplicate(a, n);
    delete[] a;
}