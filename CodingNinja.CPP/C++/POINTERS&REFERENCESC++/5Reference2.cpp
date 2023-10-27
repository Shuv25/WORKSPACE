#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the row:";
    cin >> n;

    int m;
    cout << "Enter the size of the column:";
    cin >> m;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    cout << "Enter the inputs:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing the outputs
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}