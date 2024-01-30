#include<iostream>

using namespace std;

void increasing(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void decreasing(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Size?";
    cin>>n;

    int a[n];
    cout<<"Elements:";
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