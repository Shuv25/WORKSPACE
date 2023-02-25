#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the n:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int m=1;m<=n;m++)
    {
        for(int k=1;k<=n-(n-m);k++)
        {
            cout<<" ";
        }
        for(int j=m;j<=n-1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}