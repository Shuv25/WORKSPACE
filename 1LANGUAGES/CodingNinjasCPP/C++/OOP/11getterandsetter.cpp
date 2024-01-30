#include <iostream>

using namespace std;

class Movie
{
private:
    float rating;

public:
    string name, director;

    Movie(string aname, string adirector)
    {
        name = aname;
        director = adirector;
    }

    void display()
    {
        cout << name << endl;
        cout << director << endl;
        cout << rating << endl;
    }

    void setRating(float arating)
    {
        rating = arating;
    }

    float getRating()
    {
        return rating;
    }
};

int main()
{
    Movie m1("Avengers", "Josa Widow");
    m1.setRating(4.5);
    m1.display();

    m1.setRating(4.8);
    m1.display();

    cout << m1.getRating();

    return 0;
}