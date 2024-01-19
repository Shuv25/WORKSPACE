#include <iostream>

using namespace std;

class Marks
{
private:
    int intmarks;
    int extmarks;

public:
    Marks()
    {
        intmarks = 0;
        extmarks = 0;
    }
    Marks(int im, int em)
    {
        intmarks = im;
        extmarks = em;
    }
    void display()
    {
        cout << intmarks << " " << extmarks << endl;
    }
    Marks operator-(Marks m)
    {
        Marks temp;
        temp.intmarks = intmarks - m.intmarks;
        temp.extmarks = extmarks - m.extmarks;
        return temp;
    }

    Marks operator+(Marks m);
};

Marks Marks::operator+(Marks m)
{
    Marks temp;
    temp.intmarks = intmarks + m.intmarks;
    temp.extmarks = extmarks + m.extmarks;
    return temp;
}

int main()
{
    Marks m1(20, 30), m2(30, 40);
    Marks m3 = m2 - m1;
    Marks m4 = m1 + m2;
    m3.display();
    m4.display();
}