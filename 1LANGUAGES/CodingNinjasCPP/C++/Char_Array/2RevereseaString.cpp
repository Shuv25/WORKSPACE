#include <iostream>

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

void rev(char *ch)
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
    cout << "Enter the length of the char array:";
    cin >> n;

    // Consume the newline character left in the input buffer
    cin.ignore();

    char *ch = new char[n];

    cout << "Enter a string:";
    cin.getline(ch, n);

    rev(ch);

    cout << "Reversed string: " << ch << endl;

    delete[] ch;

    return 0;
}
