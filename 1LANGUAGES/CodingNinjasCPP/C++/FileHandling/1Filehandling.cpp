#include <iostream>
#include <fstream> // for working with files it is mendatory

using namespace std;

int main()
{
    ofstream newfile("C:\\Users\\hp\\Documents\\GitHub\\WORKSPACE\\CodingNinja.CPP\\C++\\FileHandling\\f1.txt");

    newfile << "File handling"; // write operation

    newfile.close();

    ifstream newfile2("C:\\Users\\hp\\Documents\\GitHub\\WORKSPACE\\CodingNinja.CPP\\C++\\FileHandling\\f1.txt");

    string str;

    while (getline(newfile2, str))
    {
        cout << str << endl; // read operation
    }
    newfile2.close();
}