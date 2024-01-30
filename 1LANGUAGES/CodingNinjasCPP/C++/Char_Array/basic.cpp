#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Entre the size of the char array:";
    cin>>n;

    char name[n];
    cout<<"\nEnter your name:";
    cin>>name;

    name[4]='S';
    name[5]='S';

    cout<<"\nYour name:"<<name<<endl;

    return 0;
}