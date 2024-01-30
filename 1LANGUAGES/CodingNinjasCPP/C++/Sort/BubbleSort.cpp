#include<iostream>

using namespace std;

void increasing(int n,int a[])
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void decreasing(int n,int a[])
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Increasingly...:";
    increasing(n,a);
    cout<<endl;
    cout<<"Decreasingly...:";
    decreasing(n,a); 
    return 0;
}