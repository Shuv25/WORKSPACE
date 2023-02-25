#include<iostream>

using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}

void increment(int *p)
{
    p++;
}

void aincreement(int *p)
{
    (*p)++;
}
int main()
{
    int a=10;
    int *p=&a;

    print(p);
    cout<<p<<endl;
    increment(p);
    cout<<p<<endl;//adress will be same becuse in function we create a copy of same adress so any changes in the copy will not affect the main pointer
    cout<<*p<<endl;
    aincreement(p);//the value will be incremented beacuse the pass by value works on address not the values that are stored so any chages in the func it will change the value in main 
    cout<<*p<<endl;

    
    return 0;
}