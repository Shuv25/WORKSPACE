#include<iostream>

using namespace std;

void replace(char str[],char a,char x)
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!=a)
    {
        replace(str+1,a,x);
    }
    else
    {
        str[0]=x;
        replace(str,a,x);
    }
}

int main()
{
    char str[100];
    cout<<"Input:";
    cin>>str;
    char a;
    cout<<"You want to replace:";
    cin>>a;
    char x;
    cout<<"Wth which:";
    cin>>x;
    replace(str,a,x);
    cout<<str<<endl;
    return 0;
}