#include <iostream>

using namespace std;

class Player
{
    string name;
    int health;
    int xp;

public:
    void talk(string say)
    {
        cout << name << " says " << say << endl;
    }
    void print()
    {
        cout << "____________________________________" << endl;
        cout << "Player Name:" << name << endl;
        cout << "Player Health:" << health << endl;
        cout << "Player Xp:" << xp << endl;
        cout << "____________________________________" << endl;
    }

    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        name = n;
    }
    int getHealthandXp()
    {
        return health, xp;
    }
    void setHealthandXp(int h, int x)
    {
        health = h;
        xp = x;
    }
};

int main()
{
    Player *p1 = new Player();
    p1->setName("Shuv");
    p1->setHealthandXp(100, 92);
    p1->print();
    p1->talk("You Ready?");

    Player *p2 = new Player();
    p2->setName("Keanu Reevs");
    p2->setHealthandXp(100, 100);
    p2->print();
    p2->talk("Let's go boy.");

    delete p1;
    delete p2;
}