#include <iostream>

using namespace std;

class Movie
{

private:
    float rating;

public:
    string name, director;

    Movie(string aname, string adirector, float arating)
    {
        this->name = aname;
        this->director = adirector;
        setrating(arating);
    }

    void display()
    {
        cout << name << endl;
        cout << director << endl;
        cout << rating << endl;
    }

    void setrating(float arating) // set method
    {
        rating = arating;
    }

    float getRating() // get method
    {
        return rating;
    }
};

int main()
{
    Movie m1("Avengers", "Josa Widow", 4.5);
    m1.display();

    m1.setrating(4.8);
    m1.display();

    cout << m1.getRating();
}