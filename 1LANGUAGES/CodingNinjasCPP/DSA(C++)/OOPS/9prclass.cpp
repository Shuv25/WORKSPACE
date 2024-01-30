#include <iostream>

using namespace std;

class Account
{
private:
    string name;
    double balance;

public:
    double getbalance()
    {
        return balance;
    }
    void setbalance(double bal)
    {
        balance = bal;
    }

    string getname();
    void setname(string n);

    bool deposite(double amount);
    bool withdraw(double amount);
};

void Account::setname(string n)
{
    name = n;
}

string Account::getname()
{
    return name;
}

bool Account::deposite(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Account *a1 = new Account();
    a1->setname("Shuv");
    a1->setbalance(1000.0);
    if (a1->deposite(200.0))
    {
        cout << "Deposite Ok" << endl;
    }
    else
    {
        cout << "Deposite is not allowed" << endl;
    }
    if (a1->withdraw(500.0))
    {
        cout << "Withdraw ok" << endl;
    }
    else
    {
        cout << "Sorry Insuffeciant balance" << endl;
    }
    if (a1->withdraw(1500.0))
    {
        cout << "Withdraw ok" << endl;
    }
    else
    {
        cout << "Sorry Insuffeciant balance" << endl;
    }
    delete a1;
}