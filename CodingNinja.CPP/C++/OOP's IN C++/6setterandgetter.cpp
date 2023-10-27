#include <iostream>
#include <string.h>

using namespace std;

class book
{
private:
    int page;
    float price;
    char name[40];

public:
    void setpage(int p)
    {
        page = p;
    }
    void setprice(float pr)
    { // Change parameter type to float
        price = pr;
    }
    void setname(const char *na)
    { // Use const char* for string input
        strcpy(name, na);
    }

    int getpage()
    {
        return page;
    }
    float getprice()
    {
        return price;
    }
    string getname()
    {
        return name;
    }

    // void display()
    // {
    //     cout << "The no of page is " << page << endl;
    //     cout << "The price is " << price << endl;
    //     cout << "The name of the book is " << name << endl;
    // }
};

int main()
{
    book b1, b2;
    b1.setpage(100);
    b1.setprice(500.0); // Use a float value
    b1.setname("C++");
    // b1.display();
    cout << b1.getpage() << endl;
    cout << b1.getprice() << endl;
    cout << b1.getname() << endl;

    cout << "====================================" << endl;

    b2.setpage(200);
    b2.setprice(1000.0); // Use a float value
    b2.setname("JAVA");
    // b2.display();
    cout << b2.getpage() << endl;
    cout << b2.getprice() << endl;
    cout << b2.getname() << endl;

    return 0; // Added return statement
}
