#include <iostream>

using namespace std;

int c = 10; // global variable

void a(int &i)
{

    cout << c << endl;
    c++;
    cout << i << endl;
}

void b(int &i)
{
    cout << c << endl;
    cout << i << endl;
}

int main()
{
    int i = 5;
    a(i);
    b(i);
}