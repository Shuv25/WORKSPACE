#include<iostream>

using namespace std;

inline int max(int a, int b)//inline will copy the body of max function inside main where max func is called and it will not effect the perfomence of the code
{
    return (a>b)?a:b;
}

int main()
{
    int a,b;
    cout<<"Entre the velue of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    int c=max(a,b);

    cout<<"Max is:"<<c<<endl;

    return 0;
}