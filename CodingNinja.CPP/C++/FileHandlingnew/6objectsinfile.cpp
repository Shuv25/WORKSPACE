#include <iostream>
#include <fstream>

using namespace std;

class details
{
private:
    int rollno;
    string name;
    int marks;

public:
    details()
    {
        rollno = 0;
        name = "No Name";
        marks = 0;
    }

    void getdata()
    {
        cout << "Enter rollno, name and marks: ";
        cin >> rollno;
        cin.ignore();
        getline(cin, name);
        cin >> marks;
    }

    int getrecord();
    void viewallbooks();
};

void details::viewallbooks()
{
    ifstream fin;
    fin.open("f2.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}

int details::getrecord()
{
    if (rollno == 0 && marks == 0)
    {
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("f2.txt", ios::app);
        fout << rollno << "," << name << "," << marks << endl;
        fout.close();
        return 1;
    }
}

int main()
{
    details b1, b2;
    b1.getdata();
    // b1.showdata();
    b1.getrecord();
    b1.viewallbooks();
}
