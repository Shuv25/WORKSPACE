#include <iostream>

using namespace std;

int main()
{
    string x = "Hi my name\n is shuv\n how are you?";

    int wc = 0;
    int lc = 0;
    int cc = 0;

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == ' ')
        {
            wc++;
        }
        if (x[i] == '\n')
        {
            lc++;
        }
    }
    cc = x.length() - wc - lc;

    cout << "Word count: " << wc + 1 << endl;
    cout << "Line count: " << lc + 1 << endl;
    cout << "Character count: " << cc << endl;

    return 0;
}
