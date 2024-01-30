#include <iostream>
#include <string.h>

using namespace std;

class bank
{
private:
    char name[40];
    char bank_name[40];
    int balance;

public:
    bank(const char na[40], const char bn[40], int lan)
    {
        strcpy(name, na);
        strcpy(bank_name, bn);
        balance = lan;
    }
    void display()
    {
        cout << "Account holder name:" << name << endl;
        cout << "Bank Name:" << bank_name << endl;
        cout << "Account Balance:" << balance << endl;
    }

    int deposit(int money)
    {
        balance += money;
    }
    int witdraw(int witdraw_money)
    {
        balance -= witdraw_money;
    }

    ~bank()
    {
    }
};

int main()
{
    bank b1("Sourav Sutradhar", "State Bank of India", 100000000);
    b1.display();

    int n;

    do
    {
        cout << endl;
        cout << "Enter 1 for deposit, 2 for witdraw ,3 for display and 0 for exit:";
        cin >> n;

        int amount;
        int witdraw_money;

        switch (n)
        {
        case 1:
            cout << endl;
            cout << "Enter the deposit amount:";
            cin >> amount;
            b1.deposit(amount);
            break;
        case 2:
            cout << endl;
            cout << "Enter the witdraw amount:";
            cin >> witdraw_money;
            b1.witdraw(witdraw_money);
            break;
        case 3:
            cout << endl;
            b1.display();
            break;
        default:
            cout << endl;
            cout << "Thank You" << endl;
            break;
        }
    } while (n != 0);
}