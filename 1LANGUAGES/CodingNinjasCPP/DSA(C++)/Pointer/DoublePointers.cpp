#include<iostream>

using  namespace std;

void incremen1(int **p)
{
    p++;
}

void increment2(int **p)
{
    *p=*p+1;
}

void increment3(int **p)
{
    **p=**p+1;
}

int main()
{
    int a=10;
    int *p=&a;

    int ** q=&p;//it's aclled double pointer that stores the address of another pointer

    cout<<&p<<endl;
    cout<<q<<endl;

    cout<<p<<endl;
    cout<<*q<<endl;

    cout<<*p<<endl;
    cout<<**q<<endl;

    incremen1(q);
    cout<<q<<endl;
    increment2(q);
    cout<<*q<<endl;
    increment3(q);
    cout<<**q<<endl;

    return 0;
}