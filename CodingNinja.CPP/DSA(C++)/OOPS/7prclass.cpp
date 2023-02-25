#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Player
{
public:
    string name;
    int health;
    int xp;

    Player(string name, int health, int xp)
    {
        this->name = name;
        this->health = health;
        this->xp = xp;
    }
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    void print()
    {
        cout << "____________________________________" << endl;
        cout << "Player Name:" << name << endl;
        cout << "Player Health:" << health << endl;
        cout << "Player Xp:" << xp << endl;
        cout << "____________________________________" << endl;
    }
};

class Account
{
public:
    string name;
    double balance;

    Account(string name, double balance)
    {
        this->name = name;
        this->balance = balance;
    }
    bool deposite(double bal)
    {
        balance += bal;
        cout << "In deposite" << endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In withdraw" << endl;
    }
    void print()
    {
        cout << "Account Name:" << name << endl;
        cout << "Account Balance:" << balance << endl;
        cout << "--------------------------------------------" << endl;
    }
};

int main()
{
    Player *p1 = new Player("Shuv", 92, 87);
    Player *p2 = new Player("Keanu Reevs", 100, 100);
    p1->talk("Hi there");
    p2->talk("Hi there");
    p1->print();
    p2->print();

    Account *a1 = new Account("Shuv", 1000.567);
    Account *a2 = new Account("Keanu Reevs", 1000.896);
    a1->deposite(1000.234);
    a1->print();
    a1->withdraw(100.456);
    a1->print();
    a2->deposite(1200.234);
    a2->print();
    a2->withdraw(150.456);
    a2->print();

    delete p1;
    delete p2;
    delete a1;
    delete a2;
}