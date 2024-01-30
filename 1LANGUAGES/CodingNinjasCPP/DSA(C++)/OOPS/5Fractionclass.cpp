#include <iostream>

using namespace std;

class fraction
{
private:
    int numerator;
    int denometor;

public:
    fraction(int numerator, int denometor)
    {
        this->numerator = numerator;
        this->denometor = denometor;
    }
    void display()
    {
        cout << "Output is:" << numerator / denometor << endl;
    }
};

int main()
{
    fraction *f1 = new fraction(10, 2);
    f1->display();
}