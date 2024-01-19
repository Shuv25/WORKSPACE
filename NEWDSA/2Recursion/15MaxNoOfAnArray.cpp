#include <iostream>

using namespace std;

int maxn(int i, int array[])
{
    if (i > 9)
    {
        return array[i];
    }
    int misa = maxn(i + 1, array);
    if (misa > array[i])
    {
        return misa;
    }
    else
    {
        return array[i];
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int i = 0;
    int max = maxn(i, array);
    cout << max << endl;
    delete[] array;
}