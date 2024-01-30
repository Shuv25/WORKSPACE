#include <iostream>

using namespace std;

void keypad(string s[], int input[], string res, int index, int n)
{
    if (index == n)
    {
        cout << res << " ";
        return;
    }

    int digit = input[index];

    int len = s[digit].size();

    for (int i = 0; i < len; i++)
    {
        keypad(s, input, res + s[digit][i], index + 1, n);
    }
}

int main()
{
    string s[28] = {{},
                    {},
                    {'a', 'b', 'c'},
                    {'d', 'e', 'f'},
                    {'g', 'h', 'i'},
                    {'j', 'k', 'l'},
                    {'m', 'n', 'o'},
                    {'p', 'q', 'r', 's'},
                    {'t', 'u', 'v'},
                    {'w', 'x', 'y', 'z'}};

    int n;
    cout << "How many no u want to dailss:";
    cin >> n;

    int input[n];
    cout << "Enter the numbers:";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    string res = "";
    int index = 0;

    keypad(s, input, res, index, n);

    return 0;
}