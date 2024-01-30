#include <iostream>

#include <string.h>

using namespace std;

int len(char *ch)
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void palindrom(char *ch)
{
    int i = 0;
    int j = len(ch) - 1;

    while (i < j)
    {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n;
    cout << "Enter the array length:";
    cin >> n;

    cin.ignore();

    char *ch = new char[n];

    cout << "Enter a string:";
    cin.getline(ch, n);

    char *ch2 = new char[n];

    strcpy(ch2, ch);

    palindrom(ch);

    int flag = 1;

    for (int i = 0; i < len(ch2); i++)
    {
        if (ch[i] == ch2[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    delete[] ch;
    delete[] ch2;
}