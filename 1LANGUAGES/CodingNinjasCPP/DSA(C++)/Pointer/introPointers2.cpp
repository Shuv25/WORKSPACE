#include<iostream>

using namespace std;

int main()
{
    int i=10;
    int *p=&i;

    cout<<sizeof(p)<<endl;//to find the size 
    cout<<p<<endl;//Printing the address of p 

    cout<<i<<endl;//printing the value of i
    cout<<*p<<endl;//printing the value of pointer p

    i++;//incrementing i 

    cout<<i<<endl;//the value of both i and pointer p also increses beacause they are printing to the same location
    cout<<*p<<endl;


    int a=i;
    a++;

    cout<<a<<endl;//it will increment only the a beacuse the adress of a and pointer p is not same 
    cout<<*p<<endl;


    int *q=p;//here i am creating another pointer q who is storing the same address of i and p
    cout<<q<<endl;
    cout<<*q<<endl;

    int *r=0;//this called null pointer
    cout<<r<<endl;
    cout<<*r<<endl;
    (*r)++;
    cout<<*r<<endl;

    return 0;
}