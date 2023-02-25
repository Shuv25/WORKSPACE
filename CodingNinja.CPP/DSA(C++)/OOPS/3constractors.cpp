#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int rollNumber;

    /*student()
    {
        cout << "Default constractor is called" << endl; // Default constractor is called
    }
    student(int r)
    {
        cout << "Parametarized constarctor is called" << endl;
        rollNumber = r; // Parametarized constarctor is called
    }
    student(string n, int r)
    {
        cout << "Constartor is called" << endl;
        name = n;
        rollNumber = r;
    }*/
    student(string name, int rollNumber)
    {
        this->name = name;
        this->rollNumber = rollNumber;
    }
    void print()
    {
        cout << "Name:" << name << ","
             << "Roll No:" << rollNumber << endl;
    }
};

int main()
{
    /*student *s1 = new student;
    s1->name = "Shuv";
    s1->print();

    student *s2 = new student(20);
    s2->print();

    student *s3 = new student("Shuv", 25);
    s3->print();*/

    student *s4 = new student("Sourav", 25);
    s4->print();
}