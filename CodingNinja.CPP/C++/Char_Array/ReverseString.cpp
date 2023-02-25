#include<iostream>

using namespace std;

int length(char name[])
{
    int count=0;
    for(int i=0;i<100;i++)
    {
        if(name[i]!='\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

void reverse(char name[])
{
    int len=length(name);
    int i=0;int j=len-1;
    while (i<j)
    {
        char k=name[i];
        name[i]=name[j];
        name[j]=k;
        i++;
        j--;
    }
    
    cout<<name<<endl;
}

int main()
{
    char name[100];
    cout<<"Enter your name:";
    cin.getline(name,100);

    reverse(name);
    return 0;
}