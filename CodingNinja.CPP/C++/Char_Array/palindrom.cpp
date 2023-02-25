#include<iostream>

using namespace std;

int length(char c2[])
{
    int count=0;
    for(int i=0;i<100;i++)
    {
       if(c2[i]!='\0')
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

void palindrom(char c2[])
{
    int len=length(c2);

    int i=0;int j=len-1;
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
    char c1[100];
    cout<<"Enter a word:";
    cin.getline(c1,100);

    char c2[100];

    for(int i=0;i<100;i++)
    {
        c2[i]=c1[i];
    }

    cout<<"\nReverse of the word is:";
    palindrom(c2);

    for(int i=0;i<100;i++)
    {
        if(c1[i]==c2[i])
        {
            cout<<"\nYes, "<<c2<<" is palindrom."<<endl;
            break;
        }
        else
        {
            cout<<"\nNo, "<<c2<<" is not palindrom."<<endl;
            break;
        }
    }

    return 0;
}