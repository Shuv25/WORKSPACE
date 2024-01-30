#include <iostream>

using namespace std;

class animal
{
public:
    virtual void eat()
    {
        cout << "I am eating generic food" << endl;
    }
};
class cat : public animal
{
public:
    void eat()
    {
        cout << "I am eating cat food" << endl;
    }
};
class dog : public animal
{
public:
    void eat()
    {
        cout << "I am eating dog food" << endl;
    }
};

void functionshow(animal *xyz)
{
    xyz->eat();
}

int main()
{
    animal *ptr;
    cat catobj;
    dog dogobj;

    ptr = &catobj;
    functionshow(ptr);

    ptr = &dogobj;
    functionshow(ptr);
}