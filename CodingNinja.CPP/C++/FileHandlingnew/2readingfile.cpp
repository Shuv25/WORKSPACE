#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("C:\\Users\\hp\\Documents\\GitHub\\WORKSPACE\\CodingNinja.CPP\\C++\\FileHandlingnew\\f1.txt");
    char ch;
    ch = fin.get();
    while (!fin.eof())
    {
        cout << ch;
        ch = fin.get();
    }
    fin.close();
}