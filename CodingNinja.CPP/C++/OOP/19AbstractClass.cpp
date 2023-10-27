#include <iostream>

using namespace std;

class Animal
{
    virtual void sound() = 0;
};

class dog : public Animal
{
public:
    void sound()
    {
        cout << "Woof" << endl;
    }
};

int main()
{
    dog d1;
    d1.sound();
}