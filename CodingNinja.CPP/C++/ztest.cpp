#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length = 0;
    float breadth = 0;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void display()
    {
        cout << "Area is:" << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1(3, 4);
    r1.display();
}