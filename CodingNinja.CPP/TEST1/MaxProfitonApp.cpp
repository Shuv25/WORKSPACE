#include <iostream>

using namespace std;

int maxProfit(int n, int *a, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            count++;
        }
    }
    int profit = x * count;
    return profit;
}

int main()
{
    int n;
    cout << "Enter the no of buyers:";
    cin >> n;

    int *a = new int[n];
    cout << "Enter the budget of each one:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter the price of the app:";
    cin >> x;
    cout << maxProfit(n, a, x) << endl;
    delete[] a;
    return 0;
}