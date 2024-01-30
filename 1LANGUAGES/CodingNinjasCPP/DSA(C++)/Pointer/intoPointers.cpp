#include<iostream>

using namespace std;

int main()
{
    int i=10;
    cout<<&i<<endl;//& is used to find the address in memory occupied by the i variable . It's a hexadecimal no.
    
    int *p=&i; // pointers are the variable that store the address of other variables. Here i am storeing the address of i variable into p pointer
    cout<<p<<endl;
    cout<<sizeof(p)<<endl;

    cout<<*p<<endl;//it's called deferencing using *beforepointer we can access the values stored in that address. 

    float f=10.5;
    float * fp=&f;
    cout<<fp<<endl;
    cout<<sizeof(p)<<endl;

    cout<<*fp<<endl;

    double d =123.456;
    double * dp=&d;
    cout<<dp<<endl;
    cout<<sizeof(p)<<endl;

    cout<<*dp<<endl;

    return 0;
}