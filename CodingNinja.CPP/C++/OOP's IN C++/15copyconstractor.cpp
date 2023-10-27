#include <iostream>

using namespace std;

class hero
{
private:
    int *health; // Using a pointer for health
    char *level; // Using a pointer for level

public:
    hero(int health, char level)
    {
        this->health = new int(health);
        this->level = new char(level);
    }

    // Shallow copy constructor
    hero(const hero &temp)
    {
        this->health = temp.health; // Shallow copy of health
        this->level = temp.level;   // Shallow copy of level
    }

    ~hero()
    {
        delete health;
        delete level;
    }

    void display()
    {
        cout << *health << "," << *level << endl;
    }

    void setHealth(int h)
    {
        *(health) = h;
    }

    int getHealth()
    {
        return *health;
    }

    void setLevel(char l)
    {
        *(level) = l;
    }

    char getLevel()
    {
        return *level;
    }
};

int main()
{
    hero shuv(98, 'Z');
    shuv.display();

    hero sourav(shuv); // Copy constructor (shallow copy)
    sourav.display();

    sourav.setHealth(34);
    sourav.setLevel('C');

    sourav.display();
    shuv.display();

    return 0;
}
