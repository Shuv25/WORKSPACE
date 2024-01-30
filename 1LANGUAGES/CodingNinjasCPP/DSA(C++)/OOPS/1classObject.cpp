#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int rollNumber;
    void print()
    {
        cout << "Name:" << name << ","
             << "Roll No:" << rollNumber << endl;
    }
};

int main()
{
    student *s1 = new student;
    s1->name = "Shuv";
    s1->rollNumber = 25;
    s1->print();
}