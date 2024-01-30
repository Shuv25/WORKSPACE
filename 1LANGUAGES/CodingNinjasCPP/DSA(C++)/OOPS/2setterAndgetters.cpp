#include <iostream>

using namespace std;

class pupil
{
public:
    string name;

private:
    int rollNumber;

public:
    void print()
    {
        cout << "Name:" << name << ","
             << "Roll No:" << rollNumber << endl;
    }

    int getrollNumber()
    {
        return rollNumber;
    }
    void setRollNumber(int a)
    {
        rollNumber = a;
    }
};

int main()
{
    pupil *p1 = new pupil;
    p1->setRollNumber(25);
    p1->name = "Shuv";
    p1->print();
}