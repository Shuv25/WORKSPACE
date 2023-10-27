#include <iostream>

using namespace std;

class student
{
private:
    int rollno = 5;

public:
    void display();
};

void student::display() // declearing function outside of the class using scope resulation operator
{
    cout << "The roll no is:" << rollno << endl;
}

int main()
{
    student s1;
    s1.display();
}