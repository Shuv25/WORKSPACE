#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("f1.txt", ios::app);
    fout << ", Sourav from this side.";
    fout.close();

    ifstream fin;
    fin.open("f1.txt");
    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }
    fin.close();
}