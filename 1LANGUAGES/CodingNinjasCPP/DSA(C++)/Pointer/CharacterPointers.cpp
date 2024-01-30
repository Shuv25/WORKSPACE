#include<iostream>

using namespace std;

int main()
{
    int a[]={1,2,3};//it will print the address of a
    char c[]={'a','b','c'};//it will print the all the elements of the char array until it found null values
    cout<<a<<endl;
    cout<<c<<endl;

    char *b=&c[0];
    cout<<b<<endl;//it will print same as the c

    char c1='a';
    char *c2=&c1;// it will not print the address of c1
    cout<<c1<<endl;
    cout<<c2<<endl;

    char str[]="abc";
    char *pstr=&str[0];
    cout<<str<<endl;
    cout<<pstr<<endl;

    cout<<endl;

    return 0;
}