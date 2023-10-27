#include <iostream>
#include <fstream>

using namespace std;

class Book
{
private:
    int bookid;
    string bookname;
    float bookprice;

public:
    Book()
    {
        bookid = 0;
        bookname = "No Title";
        bookprice = 0;
    }

    void getdata()
    {
        cout << "Enter bookid, name and price: ";
        cin >> bookid;
        cin.ignore();
        getline(cin, bookname);
        cin >> bookprice;
    }
    void showdata()
    {
        cout << "Book Id:" << bookid << " Book Name:" << bookname << " Book Price:" << bookprice << endl;
    }

    int getrecord();
};

int Book::getrecord()
{
    if (bookid == 0 && bookprice == 0)
    {
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("f2.txt", ios::app | ios::binary);
        fout.write((char *)this, sizeof(*this));
        fout.close();
        return 1;
    }
}

int main()
{
    Book b1, b2;
    b1.getdata();
    b1.showdata();
    b1.getrecord();
    b2.showdata();
    b2.getrecord();
}