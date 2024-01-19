#include <iostream>

using namespace std;

class flights
{
public:
    int availableflights = 5;
};
class reservation : public flights
{
public:
    int availablerooms = 5;
};
class passengerinfo : public reservation
{
public:
    string name = "Kritartha Sutradhar";
    int age = 22;
    void info()
    {
        cout << "Name is:" << name << endl;
        cout << "Age is:" << age << endl;
        cout << "Available flights for " << name << " is:" << availableflights << endl;
        cout << "Available rooms for " << name << " is:" << availablerooms << endl;
    }
};

int main()
{
    passengerinfo p1;
    p1.info();
}