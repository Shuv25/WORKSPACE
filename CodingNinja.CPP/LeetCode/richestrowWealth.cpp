#include<iostream>
#include<climits>
using namespace std;

void richest(int a[][100],int n,int m)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }

    cout<<max<<endl;
}

int main()
{
    int a[100][100];
    int n;
    cout<<"entre the size of the row:";
    cin>>n;
    int m;
    cout<<"entre the size of the column:";
    cin>>m;

    cout<<"Entre the elements of the array:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    richest(a,n,m);
    return 0;
}