#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("bf1.bin", ios::binary | ios::app);

    int a = 1234;
    int b = 5678;
    fout.write((char *)&a, sizeof(a));
    fout.write((char *)&b, sizeof(b));
    fout.close();

    ifstream fin;
    fin.open("bf1.bin", ios::binary);

    int x;
    int y;
    fin.read((char *)&x, sizeof(x));
    fin.read((char *)&y, sizeof(y));

    cout << x << endl;
    cout << y << endl;

    fin.close();
}