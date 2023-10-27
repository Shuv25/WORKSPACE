#include <iostream>

using namespace std;

class bank
{
private:
    int atmpin;
    double bankBalance;

public:
    string bankName;
    string IFSC;
    double accountNo;

    void input()
    {
        atmpin = 5678;
        bankBalance = 243678383456;
        bankName = "STATE BANK OF INDIA";
        IFSC = "SPSBI1432";
        accountNo = 376826323;
    }

    void output()
    {
        cout << atmpin << endl;
        cout << bankBalance << endl;
        cout << bankName << endl;
        cout << IFSC << endl;
        cout << accountNo << endl;
    }
};

int main()
{
    bank b1;
    b1.input();
    b1.output();
}