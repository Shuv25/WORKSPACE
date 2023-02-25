#include<iostream>
#include<climits>

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

int highest(int a[][100],int n,int m)
{
    int sum;
    int max=INT_MIN;

    for(int j=0;j<m;j++)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}   

int main()
{
    int a[100][100];
    int n;int m;
    cout<<"Entre the size of the row:";
    cin>>n;
    cout<<"Enter the size of the column:";
    cin>>m;

    cout<<"Enter the elements of the the 2D array:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    print(a,n,m);
    cout<<endl;
    cout<<"The highest sum of column is:"<<highest(a,n,m)<<endl;
    
    return 0;
}