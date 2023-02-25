#include <iostream>

using namespace std;

void getSubsequences(string str, string str2)
{
    if (str.length() == 0)
    {
        cout << str2 << " ";
        return;
    }
    getSubsequences(str.substr(1), str2);
    getSubsequences(str.substr(1), str2 + str[0]);
}

int main()
{
    string str;
    cout << "Input a string:";
    getline(cin, str);
    string str2 = " ";
    cout << "The subsequences are:";
    getSubsequences(str, str2);
    return 0;
}