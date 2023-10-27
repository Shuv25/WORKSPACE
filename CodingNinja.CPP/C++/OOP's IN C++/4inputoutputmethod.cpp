#include <iostream>

using namespace std;

class student
{
private:
    int rollno;
    char name[30];

public:
    void input()
    {
        cout << "Enter name:";
        cin.getline(name, 30);
        cout << "Enter roll no:";
        cin >> rollno;
    }
    void output()
    {
        cout << "Your nam is " << name << " and your roll no is :" << rollno << endl;
    }
};

int main()
{
    student s1;
    s1.input();
    s1.output();
}