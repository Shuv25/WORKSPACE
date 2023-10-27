#include <iostream>

using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eats" << endl;
    }
};

class cat : public Animal
{
public:
    void voice()
    {
        cout << "Meao" << endl;
    }
};

class dog : public Animal
{
public:
    void bark()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    cat c1;
    dog d1;

    c1.eat();
    c1.voice();

    d1.eat();
    d1.bark();
}