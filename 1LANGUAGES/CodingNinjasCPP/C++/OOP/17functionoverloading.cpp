#include <iostream>

using namespace std;

class A
{
private:
    int n1, n2, s, m;

public:
    void random()
    {
        cout << "Enter two no:";
        cin >> n1 >> n2;

        s = n1 + n2;
        cout << "Sum is:" << s << endl;
    }

    void random(int a, int b)
    {
        m = a * b;
        cout << "Multiplication is:" << m << endl;
    }
};

int main()
{
    A o1;
    o1.random();
    o1.random(4, 5);
}