#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("f1.txt");
    char ch;
    int pos = fin.tellg();

    while (fin.get(ch))
    {
        cout << ch << " pos:" << pos << " ";
        pos++;
    }

    cout << "\nTotal length of the file is: " << pos << endl;

    fin.close();
}
