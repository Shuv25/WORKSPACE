#include<iostream>

using namespace std;

int length(char c2[])
{
    int count=0;
    for(int i=0;c2[i]!='\0';i++)
    {
        count++;
    }

    return count;
}

void check(char c2[])
{
    int n=length(c2);

    int i=0;
    int j=n-1;
    while (i<j)
    {
        int temp=c2[i];
        c2[i]=c2[j];
        c2[j]=temp;
        i++;
        j--;
    }
    cout<<c2<<endl;
}

int main()
{
    char c[100];
    cout<<"Entre a string:";
    cin>>c;

    char c2[100];
    for(int i=0;i<100;i++)
    {
        c2[i]=c[i];
    }

    check(c2);

    for(int i=0;i<100;i++)
    {
        if(c[i]==c2[i])
        {
            cout<<"Palindrom"<<endl;
            break;
        }
        else
        {
            cout<<"Not Palindrom"<<endl;
            break;
        }
    }

    return 0;
}