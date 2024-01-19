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
    string line;
    while (getline(fin, line))
    {
        cout << line;
    }
    fin.close();
}