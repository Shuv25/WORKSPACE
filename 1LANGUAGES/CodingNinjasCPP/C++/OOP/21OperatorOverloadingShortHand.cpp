#include <iostream>

using namespace std;

class Marks
{
private:
    int marks;

public:
    Marks()
    {
        marks = 0;
    }
    Marks(int m)
    {
        marks = m;
    }
    void displaymarks()
    {
        cout << "Your mark is:" << marks << endl;
    }
    void operator+=(int bonusmark)
    {
        marks += bonusmark;
    }
    friend void operator-=(Marks &currobj, int reducedmark);
};

void operator-=(Marks &currobj, int reducedmark)
{
    currobj.marks -= reducedmark;
}

int main()
{
    Marks m1(90);
    m1.displaymarks();
    m1 += 10;
    m1.displaymarks();
    m1 -= 20;
    m1.displaymarks();
}