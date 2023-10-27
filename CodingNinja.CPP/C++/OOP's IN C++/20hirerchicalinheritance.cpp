#include <iostream>

using namespace std;

class human
{
public:
    void speak()
    {
        cout << "Human voice" << endl;
    }
};

class male : public human
{
};
class female : public human
{
};
int main()
{
    male m3;
    m3.speak();

    female f3;
    f3.speak();
}