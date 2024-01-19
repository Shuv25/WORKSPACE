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
    Marks operator++(int)
    {
        Marks temp(*this);
        marks++;
        return temp;
    }
    friend Marks operator--(Marks &currobj, int);
};

Marks operator--(Marks &currobj, int)
{
    Marks temp(currobj);
    currobj.marks--;
    return temp;
}

int main()
{
    Marks m1;
    m1 = 12;
    m1.displaymarks();
    (m1++).displaymarks();
    (m1--).displaymarks();
    m1.displaymarks();
}