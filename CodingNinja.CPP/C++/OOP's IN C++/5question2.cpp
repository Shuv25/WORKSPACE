#include <iostream>
using namespace std;

class table
{
private:
    int lowerno;
    int upperno;

public:
    void input()
    {
        cout << "Enter the lowerno:";
        cin >> lowerno;
        cout << "Enter the upperno:";
        cin >> upperno;
    }
    void output()
    {
        for (int i = lowerno; i <= upperno; i++)
        {
            cout << "The table of " << i << ":-" << endl;

            for (int j = 1; j <= 10; j++)
            {
                cout << i << "*" << j << "=" << i * j << endl;
            }
        }
    }
};

int main()
{
    table t1;
    t1.input();
    t1.output();
}