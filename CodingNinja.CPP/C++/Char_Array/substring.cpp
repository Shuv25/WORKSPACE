#include<iostream>
#include<cstring>

using namespace std;

void substring(char c[])
{
    int n=strlen(c);

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<c[k]<<" ";
            }
            cout<<endl;
        }
    }
    
}

int main()
{
    char c[100];
    cout<<"Enter a string:";
    cin.getline(c,100);

    substring(c);

    return 0;
}