#include<iostream>

using namespace std;

void wave(int a[][100],int n,int m)
{
    for(int j=0;j<m;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    
}

int main()
{
    int a[100][100];
    int n;int m;
    cout<<"Enter the size of the row:";
    cin>>n;
    cout<<"Enter the size of the column:";
    cin>>m;

    cout<<"Enter the elementsof the array:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    wave(a,n,m);

    return 0;
}