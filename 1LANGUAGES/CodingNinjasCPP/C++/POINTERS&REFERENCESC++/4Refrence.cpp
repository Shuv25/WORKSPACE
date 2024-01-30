#include <iostream>

using namespace std;

void update(int &n) // passing refrence
{
    n++;
}

int getSum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;

    delete[] a;
}

int main()
{
    int i = 5;
    int &j = i; // j storing the address of i

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    cout << endl;

    int n = 5;

    cout << n << endl;
    update(n);
    cout << n << endl;

    // dynamic allocation
    cout << endl;

    int n2;
    cout << "Enter the size of the array:";
    cin >> n2;

    int *a = new int[n2];

    for (int i = 0; i < n2; i++)
    {
        cin >> a[i];
    }

    cout << getSum(a, n2) << endl;
}