#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }

    Complex operator+(Complex m)
    {
        Complex temp;
        temp.real = real + m.real;
        temp.img = img + m.img;
        return temp;
    }
};

int main()
{
    Complex m1(10, 20), m2(30, 40);
    Complex m3 = m1 + m2;
    m3.display();
}