#include <iostream>

using namespace std;

int main()
{
    char name[50];
    cout << "Enter your name:";
    cin.getline(name, 50);

    cout << "Your name is " << name;

    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    cout << endl;

    cout << "Length of the string is:" << count;
}