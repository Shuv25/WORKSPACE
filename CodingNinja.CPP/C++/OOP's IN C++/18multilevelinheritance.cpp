#include <iostream>

using namespace std;

class animal
{
public:
    float height;
    float weight;

    void speak()
    {
        cout << "Animal sound" << endl;
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
class germanshepard : public dog
{
};
int main()
{
    germanshepard g1;
    g1.speak();
}