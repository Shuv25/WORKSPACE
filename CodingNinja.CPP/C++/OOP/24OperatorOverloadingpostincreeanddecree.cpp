#include <iostream>

using namespace std;

class Marks
{
private:
    int subjects[3];

public:
    Marks(int sub1, int sub2, int sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }

    int operator[](int pos)
    {
        return subjects[pos];
    }
};

int main()
{
    Marks shuv(98, 99, 100);
    cout << shuv[0] << endl;
    cout << shuv[1] << endl;
    cout << shuv[2] << endl;
    return 0;
}
