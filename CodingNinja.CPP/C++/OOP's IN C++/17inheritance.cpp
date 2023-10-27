#include <iostream>

using namespace std;

class human
{
public:
    float height;
    float weight;
    int age;

    int getheight()
    {
        return height;
    }
    int getweight()
    {
        return weight;
    }
    int getage()
    {
        return age;
    }
};

class male : public human
{
public:
    string color;

    void message()
    {
        cout << "Slleping" << endl;
    }
};

int main()
{
    male m1;
    m1.height = 5.7;
    m1.weight = 60;
    m1.age = 21;
    m1.color = "Brown";

    cout << m1.height << endl;
    cout << m1.weight << endl;
    cout << m1.age << endl;
    cout << m1.color << endl;
    m1.message();
}