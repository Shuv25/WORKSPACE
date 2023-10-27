#include <iostream>
#include <cstring>

using namespace std;

bool isLowerCase(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isAlphabetic(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isPalindrome(char *ch, int length)
{
    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        while (i < j && !isAlphabetic(ch[i]))
            i++; // Skip non-alphabetic characters
        while (i < j && !isAlphabetic(ch[j]))
            j--; // Skip non-alphabetic characters

        char left = toLowerCase(ch[i]);
        char right = toLowerCase(ch[j]);
        if (left != right)
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
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

    int length = strlen(ch);

    if (isPalindrome(ch, length))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    delete[] ch;

    return 0;
}
