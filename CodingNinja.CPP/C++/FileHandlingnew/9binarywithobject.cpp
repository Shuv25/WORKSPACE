#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class details
{
public:
    int rollno;
    char name[50];
    float marks;
    details()
    {
        ////
    }
    details(int rollno, const char *name, float marks)
    {
        this->rollno = rollno;
        strcpy(this->name, name);
        this->marks = marks;
    }
};

int main()
{
    details s1(1, "Shuv", 800);
    ofstream fout;
    fout.open("bf3.bin", ios::binary | ios::app);
    fout.write((char *)&s1, sizeof(s1));
    fout.close();

    details s2;
    ifstream fin;
    fin.open("bf3.bin", ios::binary);
    fin.read((char *)&s2, sizeof(s2));
    fin.close();

    cout << s2.rollno << " " << s2.name << " " << s2.marks << endl;
}