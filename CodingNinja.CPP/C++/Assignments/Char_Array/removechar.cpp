#include<iostream>
#include<cstring>

using namespace std;

void remove(char c[],char x)
{
    int n=strlen(c);

    for(int i=0;i<n;i++)
    {
        if(c[i]!=x)
        {
            cout<<c[i]<<"";
        }
    }
     
}

int main()
{
    char c[100];
    cout<<"Enter the string:";
    cin.getline(c,100);

    char x;
    cout<<"Enter the character you want to remove:";
    cin>>x;

    remove(c,x);

    return 0;
}
