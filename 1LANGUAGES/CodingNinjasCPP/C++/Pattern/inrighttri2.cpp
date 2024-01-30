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
        int k=2;
        while (k<=n-(n-i))
        {
            cout<<" ";
            k=k+1;
        }
        int j=i;
        while (j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}