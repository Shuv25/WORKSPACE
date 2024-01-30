#include <iostream>

using namespace std;

class record
{
private:
    char name[40];
    int sub1mark, sub2mark, sub3mark;

public:
    void input()
    {
        cout << "Enter the name of the student:";
        cin.getline(name, 40);
        cout << "Enter the marks of three subjects:";
        cin >> sub1mark >> sub2mark >> sub3mark;
    }

    void output()
    {
        float percentage = (sub1mark + sub2mark + sub3mark) / 3;

        cout << "Your name is " << name << endl;
        cout << "Your percentage is " << percentage << endl;
        cout << "Your exam status is ";

        if (percentage >= 80)
        {
            cout << "Merit" << endl;
        }
        else if (80 > percentage && percentage >= 60)
        {
            cout << "First" << endl;
        }
        else if (60 > percentage && percentage >= 40)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Fail";
        }
    }
};

int main()
{
    record r1;
    r1.input();
    r1.output();
}