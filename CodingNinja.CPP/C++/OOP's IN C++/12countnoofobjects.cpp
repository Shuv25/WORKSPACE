#include <iostream>

using namespace std;

class counter
{
private:
    static int count;

public:
    counter()
    {
        count++;
        display();
    }

    void display()
    {
        system("cls");
        cout << "Total no of objects:" << count << endl;
    }
};

int counter::count = 0;

main()
{
    counter c1, c2, c3, c4;
}