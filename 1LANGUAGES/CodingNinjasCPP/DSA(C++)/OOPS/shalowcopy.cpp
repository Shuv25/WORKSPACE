#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        // Shallow Copy(we should avoid always)
        // this->name = name;

        // Deep Copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
};
int main()
{
    char name[] = "abcd";
    Student s1(21, name);
    s1.display();

    name[3] = 'e';
    Student s2(22, name);
    s2.display();

    s1.display();
}