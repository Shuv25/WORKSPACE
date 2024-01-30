#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Book
{
private:
    int bookId;
    string bookName;
    float bookPrice;

public:
    Book()
    {
        bookId = 0;
        bookName = "No Title";
        bookPrice = 0;
    }

    void getData()
    {
        cout << "Book Id: ";
        cin >> bookId;
        cin.ignore();
        cout << "Book Name: ";
        getline(cin, bookName);
        cout << "Book Price: ";
        cin >> bookPrice;
    }

    int getRecords()
    {
        if (bookId == 0 && bookPrice == 0)
        {
            return 0;
        }
        else
        {
            ofstream fout;
            fout.open("f3.txt", ios::app);
            fout << bookId << "," << bookName << "," << bookPrice << endl;
            fout.close();
            return 1;
        }
    }

    void viewRecords()
    {
        ifstream fin;
        fin.open("f3.txt");
        string line;
        cout << "\nData in file:" << endl;
        while (getline(fin, line))
        {
            cout << line << endl;
        }
        fin.close();
    }

    void searchRecord(string searchTerm)
    {
        ifstream fin;
        fin.open("f3.txt");
        string line;
        bool found = false;
        while (getline(fin, line))
        {
            stringstream ss(line);
            string token;

            getline(ss, token, ','); // Read the book ID
            int bookId = stoi(token);
            getline(ss, token, ','); // Read the book name
            string bookName = token;
            getline(ss, token, ','); // Read the book price
            float bookPrice = stof(token);

            if (bookName == searchTerm || to_string(bookId) == searchTerm || bookPrice == stof(searchTerm))
            {
                cout << "Book found: Book Id:" << bookId << " Book Name:" << bookName << " Book Price:" << bookPrice << endl;
                found = true;
            }
        }

        fin.close();

        if (!found)
        {
            cout << "No book found with the specified name, ID, or price: " << searchTerm << endl;
        }
    }
};

int main()
{
    Book b1, b2;
    b1.getData();
    b1.getRecords();
    b1.viewRecords();
    string searchTerm;
    cout << "Enter the book name, ID, or price you want to search: ";
    cin >> searchTerm;
    b1.searchRecord(searchTerm);
    return 0;
}
