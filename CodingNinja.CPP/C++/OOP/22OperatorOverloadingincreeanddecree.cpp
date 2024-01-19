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
    void operator++()
    {
        marks++;
    }
    friend void operator--(Marks &currobj);
};

void operator--(Marks &currobj)
{
    currobj.marks--;
}

int main()
{
    Marks m1;
    m1 = 10;
    m1.displaymarks();
    ++m1;
    m1.displaymarks();
    --m1;
    m1.displaymarks();
}