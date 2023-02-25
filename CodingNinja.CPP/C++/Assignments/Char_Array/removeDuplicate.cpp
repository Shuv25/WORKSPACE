#include<iostream>
#include<cstring>

using namespace std;

void rmvdup(char c[])
{
    int n=strlen(c);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(c[i]==c[j])
            {
                for(int k=j;k<n-1;k++)
                {
                    c[k]=c[k+1];
                }
                n--;
                j--;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main()
{
    char c[100];
    cout<<"Enter the string:";
    cin.getline(c,100);

    rmvdup(c);

    return 0;
}