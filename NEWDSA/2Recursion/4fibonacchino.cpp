#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Number:";
    cin >> n;

    // cout << "Fibonacchi no " << fib(n) << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
}