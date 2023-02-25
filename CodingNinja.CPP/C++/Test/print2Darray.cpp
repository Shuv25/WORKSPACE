#include<iostream>

using namespace std;

void print(int a[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }   
}

int main()
{
    int a[100][100];
    int n;int m;
    cout<<"Entre the length of row:";
    cin>>n;
    cout<<"Entre the length of column:";
    cin>>m;

    cout<<"entre the elements of the array:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    print(a,n,m);

    return 0;
}