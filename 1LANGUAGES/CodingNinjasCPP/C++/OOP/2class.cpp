#include <iostream>

using namespace std;

class person
{
private:
    int run;
    string msg;

public:
    void play()
    {
        run = 100;

        cout << "Run:" << run << endl;
    }

    void exe()
    {
        msg = "I practiced boxing today";
        cout << msg << endl;
    }
};

int main()
{
    person p1;
    p1.play();
    p1.exe();
}