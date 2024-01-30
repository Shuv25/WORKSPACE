#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char firstname[20];
    char lastname[20];
    cout << "Enter the firstname:";
    cin.getline(firstname, 20);
    cout << "Enter the lastname:";
    cin.getline(lastname, 20);

    cout << "The length of firstname is:" << strlen(firstname) << endl;
    cout << "The length of lastname is:" << strlen(lastname) << endl;

    cout << "the length of fullname is:" << strlen(strcat(firstname, lastname)) << endl;

    return 0;
}