#include<iostream>

using namespace std;

int main()
{
    int i=10;
    int *p=&i;

    cout<<p<<endl;
    p++;//incrementing the address of p
    cout<<p<<endl;
    p++;//again incrementing the address of p
    cout<<p<<endl;
    p=p-4;//decrementing the adress of p
    cout<<p<<endl;

    double d=123.456;
    double *dp=&d;
    cout<<dp<<endl;
    dp++;//incrementing the address of dp pointer, in this case it will increment by 8 btytes
    cout<<dp<<endl;

    return 0;
}