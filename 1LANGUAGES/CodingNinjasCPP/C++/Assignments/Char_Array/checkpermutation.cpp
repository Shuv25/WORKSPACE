#include<iostream>
#include<cstring>

using namespace std;


void sort1(char c[],int n1)
{
    for(int i=0;i<n1;i++)
    {
        int min=i;
        for(int j=i+1;j<n1;j++)
        {
            if(c[j]<c[min])
            {
                min=j;
            }
        }
        int temp=c[i];
        c[i]=c[min];
        c[min]=temp;
    }
}

void sort2(char c2[],int n2)
{
    for(int i=1;i<n2;i++)
    {
        int current=c2[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(c2[j]>current)
            {
                c2[j+1]=c2[j];
            }
        }
        c2[j+1]=current;
    }
}

int check(char c[],char c2[])
{
    int n1=strlen(c);
    int n2=strlen(c2);

    if(n1!=n2)
    {
        return -1;
    }
    sort1(c,n1);
    sort2(c2,n2);

    for(int i=0;i<n1;i++)
    {
        if(c[i]==c2[i])
        {
            return 1;
        }
        return -1;
    }
}

int main()
{
    char c[100];
    cout<<"Enter a string:";
    cin.getline(c,100);

    char c2[100];
    cout<<"Enter another string:";
    cin.getline(c2,100);

    cout<<check(c,c2)<<endl;

    return 0;
}