#include<iostream>

using namespace std;

int length(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }

    int smallOutput=length(str+1);
    return 1+smallOutput;
}

int main()
{
    char str[100];
    cout<<"Input:";
    cin>>str;

    int l=length(str);
    cout<<l<<endl;
}