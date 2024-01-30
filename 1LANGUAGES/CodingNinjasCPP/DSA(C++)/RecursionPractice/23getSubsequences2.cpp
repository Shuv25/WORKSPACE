#include <iostream>

using namespace std;

int length(int len)
{
    if (len == 0)
    {
        return 1;
    }
    return 2 * length(len - 1);
}

int getSubsequences(string str, string *str2)
{
    if (str.length() == 0)
    {
        str2[0] == " ";
        return 1;
    }

    string subString = str.substr(1);
    int newStringArraylemgth = getSubsequences(subString, str2);

    for (int i = 0; i < newStringArraylemgth; i++)
    {
        str2[i + newStringArraylemgth] = str[0] + str2[i];
    }
    return 2 * newStringArraylemgth;
}

int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);

    int len = str.length();
    int n = length(len); // length of new string array

    string *str2 = new string[n];

    int count = getSubsequences(str, str2);

    for (int i = 0; i < count; i++)
    {
        cout << str2[i] << " ";
    }
    delete[] str2;
    return 0;
}