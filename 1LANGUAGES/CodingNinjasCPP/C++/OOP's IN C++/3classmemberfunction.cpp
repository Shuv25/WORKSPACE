#include <iostream>

using namespace std;

class studnet
{
public:
    void display(int roll, string name)
    {
        cout << "The name is " << name << " and the roll no is " << roll << endl;
    }
};

int main()
{
    studnet s1;
    s1.display(25, "Sourav Sutradhar");
}