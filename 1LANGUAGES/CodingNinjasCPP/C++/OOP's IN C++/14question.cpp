#include <iostream>
#include <cstring>

using namespace std;

class Bank
{
private:
    char *name;
    char *bankname;
    int balance;

public:
    Bank(const char *name, const char *bankname, int balance)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);

        this->bankname = new char[strlen(bankname) + 1];
        strcpy(this->bankname, bankname);

        this->balance = balance;
    }

    ~Bank()
    {
        delete[] name;
        delete[] bankname;
    }

    void display()
    {
        cout << "Account Holder Name: " << name << endl;
        cout << "Bank Name: " << bankname << endl;
        cout << "Balance: " << balance << endl;
    }

    void addmoney(int credit)
    {
        balance += credit;
    }

    void retrivemoney(int debit)
    {
        if (balance >= debit)
            balance -= debit;
        else
            cout << "Insufficient balance." << endl;
    }
};

int main()
{
    Bank *b1 = new Bank("Sourav Sutradhar", "State Bank of India", 10000000);

    int n;

    while (n != 0)
    {
        cout << "For credit 1, for debit 2, for display 3 and for exit 0: ";
        cin >> n;
        switch (n)
        {
        case 1:
            int credit;
            cout << "Enter how much money you want to add: ";
            cin >> credit;
            b1->addmoney(credit);
            break;
        case 2:
            int debit;
            cout << "Enter how much money you want to retrieve: ";
            cin >> debit;
            b1->retrivemoney(debit);
            break;
        case 3:
            b1->display();
            break;
        default:
            cout << "Invalid input." << endl;
            break;
        }
    }

    delete b1; // Free the allocated memory

    return 0;
}
