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

    // Deep copy constructor
    hero(const hero &temp)
    {
        this->health = new int(*(temp.health)); // Deep copy of health
        this->level = new char(*(temp.level));  // Deep copy of level
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

    hero sourav(shuv); // Copy constructor (deep copy)
    sourav.display();

    sourav.setHealth(34);
    sourav.setLevel('C');

    sourav.display();
    shuv.display();

    return 0;
}
