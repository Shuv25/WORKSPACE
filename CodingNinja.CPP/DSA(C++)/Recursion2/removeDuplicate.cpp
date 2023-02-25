#include<iostream>

using namespace std;

void duplicate(char str[])
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!=str[1])
    {
        duplicate(str+1);
    }
    else
    {
        int i=1;
        for(;str[i]!='\0';i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        duplicate(str);
    }
}

int main()
{
    char str[100];
    cout<<"Input:";
    cin>>str;
    duplicate(str);
    cout<<str<<endl;
    return 0;
}