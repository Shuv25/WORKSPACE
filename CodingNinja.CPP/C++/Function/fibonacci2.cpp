#include <iostream>

using namespace std;

void fibonacci(int input)
{
    int firstterm = 0;
    int secondterm = 1;
    for (int i = 0; i <= input; i++)
    {
        cout << firstterm << " ";
        int thirdterm = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = thirdterm;
    }
}

int main()
{
    int n;
    cout << "Enter the no till you want to print fibonacci series:";
    cin >> n;

    cout << "The fibonacci series till " << n << " is:";
    fibonacci(n);
    return 0;
}