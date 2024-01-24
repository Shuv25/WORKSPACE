#include <iostream>

using namespace std;

class PrimeNo
{
private:
    int firstno;
    int lastno;

public:
    PrimeNo(int fn, int la)
    {
        firstno = fn;
        lastno = la;
    }

    void numbers()
    {
        for (int i = firstno; i <= lastno; i++)
        {
            int flag = 0;
            for (int p = 2; p <= i / 2; p++)
            {
                if (i % p == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0 && i != 1)
            {
                cout << i << " ";
            }
        }
    }
};

int main()
{
    int f;
    cout << "Enter the first no:";
    cin >> f;

    int l;
    cout << "Enter the last no:";
    cin >> l;

    PrimeNo p(f, l);
    p.numbers();

    return 0;
}
