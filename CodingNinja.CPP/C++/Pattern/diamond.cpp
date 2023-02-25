#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the n:";
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int k=1;
        while (k<=n-i)
        {
            cout<<" ";
            k=k+1;
        }
        int j=1;
        while (j<=i)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    int m=1;
    while (m<=n)
    {
        int k=1;
        while (k<=n-(n-m))
        {
            cout<<" ";
            k=k+1;
        }
        int j=m;
        while (j<=n-1)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        m=m+1;
    }
    
    return 0;
}