#include <iostream>

using namespace std;

class animal
{
public:
    float height;
    float weight;

    void color()
    {
        cout << "brown and black" << endl;
    }
};
class dog
{
public:
    void speak()
    {
        cout << "Bark" << endl;
    }
};
class germanshepard : public animal, public dog
{
};

int main()
{
    germanshepard g1;
    g1.color();
    g1.speak();
}