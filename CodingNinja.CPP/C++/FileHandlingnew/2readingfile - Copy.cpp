#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("C:\\Users\\hp\\Documents\\GitHub\\WORKSPACE\\CodingNinja.CPP\\C++\\FileHandlingnew\\f1.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}