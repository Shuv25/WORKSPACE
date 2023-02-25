#include<iostream>

using namespace std;

void increment(int &a)//before it was not incrementing but now it will incrementing because we pass the value of a as reffrence here . This time it will not create a copy of a to incrent the value in copy
{
    a++;
}

int  main()
{
    int a=10;
    int b=a;

    increment(a);
    cout<<a<<endl;
    a++;
    cout<<b<<endl;//beacuse is stired in diff loctaion the value will not increse 

    int &j=a;
    cout<<j<<endl;//in this case the value will increase because we pass j as a reffrence of a , means they are pointing same memory

    int k=100;
    j=k;
    cout<<a<<endl;// the value of a will be 100 beacuse j is taking the value k and j and a is reffreing the same memory.
}