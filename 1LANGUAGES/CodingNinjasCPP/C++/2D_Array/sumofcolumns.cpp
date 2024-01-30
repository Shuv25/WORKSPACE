#include<iostream>

using namespace std;

void sum(int n,int m,int a[][100])
{   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    int sum;
    for(int j=0;j<m;j++)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
}

int main()
{
    int a[100][100];
    int n;int m;
    cout<<"Enter the size of row:";
    cin>>n;
    cout<<"Enter the size of column:";
    cin>>m;

    cout<<"Elements of the array:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }    
    }

    sum(n,m,a);

    return 0;
}