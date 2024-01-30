#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class employee
{
private:
    int id;
    char name[50];
    char add[50];

public:
    employee()
    {
    }
    employee(int _id, const char *_name, const char *_add)
    {
        id = _id;
        strcpy(name, _name);
        strcpy(add, _add);
    }
    void info()
    {
        cout << id << "," << name << "," << add << endl;
    }
};

void adddata(employee obj)
{
    ofstream fout;
    fout.open("bf4.bin", ios::binary | ios::app);
    fout.write((char *)&obj, sizeof(obj));
    fout.close();
}
void getdata()
{
    ifstream fin;
    employee obj;
    fin.open("bf4.bin", ios::binary);
    while (fin.read((char *)&obj, sizeof(obj)))
    {
        obj.info();
    }

    fin.close();
}

void updatedata()
{
}

int main()
{
    employee e1(1, "Shuv", "Sapatgram");
    employee e2(2, "Tony", "Calafornia");
    adddata(e1);
    adddata(e2);

    getdata();
}