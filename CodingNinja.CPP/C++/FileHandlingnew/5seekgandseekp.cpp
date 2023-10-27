#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("f1.txt");
    cout << fin.tellg() << endl;
    cout << (char)fin.get();
    cout << (char)fin.get();
    cout << endl;
    cout << fin.tellg() << endl;
    fin.seekg(6);
    cout << fin.tellg() << endl;
    cout << (char)fin.get();
    fin.seekg(-3, ios_base::cur);
    cout << endl;
    cout << fin.tellg() << endl;
    cout << (char)fin.get() << endl;
    cout << fin.tellg() << endl;
    fin.seekg(2, ios_base::cur);
    cout << fin.tellg() << endl;
    cout << (char)fin.get();
    fin.seekg(-2, ios_base::cur);
    cout << endl;
    cout << fin.tellg() << endl;
    cout << (char)fin.get();
    fin.seekg(2, ios_base::beg);
    cout << endl;
    cout << fin.tellg() << endl;
    cout << (char)fin.get();
    fin.seekg(-2, ios_base::end);
    cout << endl;
    cout << fin.tellg() << endl;
    cout << (char)fin.get();
    fin.close();
}