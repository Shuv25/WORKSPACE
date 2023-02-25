#include <iostream>

using namespace std;

void unique(int *a, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                break;
            }
        }
        if (j == n)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;
    int *a = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unique(a, n);
    delete[] a;
    return 0;
}
