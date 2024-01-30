#include<iostream>

using namespace std;

int length(int n)
{
    if(n==0)
    {
        return 1;
    }
    int s=length(n-1);
    int b=2*s;
    return b;
}

int substring(string *a,string str)
{
    if(str.length()==0)
    {
        a[0]="";
        return 1;
    }
    string smallString=str.substr(1);
    int smallStringSize=substring(a,smallString);
    for(int i=0;i<smallStringSize;i++)
    {
        a[i+smallStringSize]=str[0]+a[i];
    }
    return 2*smallStringSize;
}

int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    int n=str.length();
    int len=length(n);
    string *a=new string[len];
    int count=substring(a,str);
    for(int i=0;i<count;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}