#include <iostream>

using namespace std;

class animal
{
public:
    void speek()
    {
        cout << "animal language" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    dog d1;
    d1.speak();
}