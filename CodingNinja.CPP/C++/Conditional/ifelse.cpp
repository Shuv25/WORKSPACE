#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the first no:";
    cin>>a;
    cout<<"Enter the second no:";
    cin>>b;
    cout<<"Enter the third no:";
    cin>>c;

    if(a>b && a>b)
    {
        cout<<a<<" is greatest no among the three no"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is greatest no among the three no"<<endl;
    }
    else
    {
        cout<<c<<" is greatest no among the three no"<<endl;
    }
    return 0;
}