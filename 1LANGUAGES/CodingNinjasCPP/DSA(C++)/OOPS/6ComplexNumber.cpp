#include <iostream>

using namespace std;

class Complex
{
public:
    int real;
    int img;

    void setValue()
    {
        cin >> real;
        cin >> img;
    }
    void sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    Complex *c1 = new Complex;
    Complex *c2 = new Complex;
    Complex *c3 = new Complex;
    cout << "Enetr the real and img part of first no:";
    c1->setValue();
    cout << "Enetr the real and img part of second no:";
    c2->setValue();
    cout << "The sum of two complex numbers is:";
    c3->sum(*c1, *c2);
    c3->display();
}