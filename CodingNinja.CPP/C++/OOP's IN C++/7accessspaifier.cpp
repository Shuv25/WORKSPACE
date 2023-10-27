#include <iostream>

using namespace std;

class test
{
private:
    int n;

public:
    void setdata(int no)
    {
        n = no;
    }

    int getdata()
    {
        return n;
    }
};

int main()
{
    test t1;
    t1.setdata(10);
    cout << t1.getdata() << endl;
    ;
}