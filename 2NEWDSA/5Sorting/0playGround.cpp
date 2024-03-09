#include <iostream>

using namespace std;

int partition(int *arr, int s, int e, int n)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivoindex = s + cnt;

    int temp = arr[s];
    arr[s] = arr[pivoindex];
    arr[pivoindex] = temp;

    int i = s;
    int j = e;

    while (i < pivoindex && j > pivoindex)
    {
        while (i < pivot)
        {
            i++;
        }
        while (j > pivot)
        {
            j--;
        }
        if (i < pivoindex && j > pivoindex)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}

void quicksort(int *arr, int s, int e, int n)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e, n);

    quicksort(arr, s, p - 1, n);
    quicksort(arr, p + 1, e, n);
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}