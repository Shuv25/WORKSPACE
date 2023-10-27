#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("C:\\Users\\hp\\Documents\\GitHub\\WORKSPACE\\CodingNinja.CPP\\C++\\FileHandlingnew\\f1.txt");
    fout << "Hello World";
    fout.close();
}