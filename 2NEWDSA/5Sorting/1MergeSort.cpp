#include <iostream>

using namespace std;

void Merge(int s, int e, int m, int *arr)
{
    int mid = (s + e) / 2;

    int llen = m - s + 1;
    int rlen = e - m;

    int *larr = new int[llen];
    int *rarr = new int[rlen];

    int k = s;
    for (int i = 0; i < llen; i++)
    {
        larr[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < rlen; i++)
    {
        rarr[i] = arr[k++];
    }

    int lindex = 0;
    int rindex = 0;

    k = s;
    while (lindex < llen && rindex < rlen)
    {
        if (larr[lindex] < rarr[rindex])
        {
            arr[k++] = larr[lindex++];
        }
        else
        {
            arr[k++] = rarr[rindex++];
        }
    }
    while (lindex < llen)
    {
        arr[k++] = larr[lindex++];
    }
    while (rindex < rlen)
    {
        arr[k++] = rarr[rindex++];
    }

    delete[] larr;
    delete[] rarr;
}

void MergeSort(int s, int e, int *arr)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    MergeSort(s, mid, arr);
    MergeSort(mid + 1, e, arr);

    Merge(s, e, mid, arr);
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the eleents of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    MergeSort(start, end, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}