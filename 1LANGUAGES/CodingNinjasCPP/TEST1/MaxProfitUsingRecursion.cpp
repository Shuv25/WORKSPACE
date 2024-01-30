#include <iostream>

using namespace std;

int maxProfit(int n, int *a, int x)
{
    static int count = 0;
    if (n == 0)
    {
        return n;
    }
    if (a[0] >= x)
    {
        count++;
    }
    maxProfit(n - 1, a + 1, x);
    return x * count;
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
    return 0;
}