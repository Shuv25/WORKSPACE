#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int rollNumber;

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
    ~student()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    student *s1 = new student("Shuv", 25);
    s1->print();

    student *s2 = new student(*s1); // Copy constractor
    s2->print();

    delete s1; // calling destructors
    delete s2;
}