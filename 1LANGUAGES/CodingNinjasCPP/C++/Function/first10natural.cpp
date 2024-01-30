#include <iostream>

using namespace std;

void first(int input)
{
    for (int i = 1; i <= input; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n = 20;
    first(n);
    return 0;
}