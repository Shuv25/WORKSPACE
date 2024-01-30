#include<iostream>

using namespace std;

void print(int a[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
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

    cout<<"Enter the elements of 2d array:";
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

