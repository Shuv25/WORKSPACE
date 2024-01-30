#include <iostream>
#include <string>

using namespace std;

struct library
{
    int bookid;
    string title;
    float rupee;

    void input()
    {
        cout << "Enter the Book Id:";
        cin >> bookid;
        cin.ignore();
        cout << "Book Name:";
        getline(cin, title);
        cout << "Book Price:";
        cin >> rupee;
    }
    void display()
    {
        cout << "Book ID:" << bookid << ", Title:" << title << " Rupee:" << rupee << endl;
    }
};

int main()
{
    library l1;
    l1.input();
    l1.display();
}