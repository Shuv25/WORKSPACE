#include <iostream>

using namespace std;

int sum(int input)
{
    int add = 0;
    for (int i = 0; i <= input; i++)
    {
        add += i;
    }
    return add;
}

int main()
{
    int n = 30;
    int addition = sum(n);
    cout << addition << endl;
}