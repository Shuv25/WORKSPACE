#include<iostream>

using namespace std;

void incraesing(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        int current=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>current)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=current;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void decraesing(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        int current=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>current)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=current;
    }

    for (int i = n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;

    int a[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Increasingly....:";
    incraesing(n,a);
    cout<<endl;
    cout<<"Decreasingly....:";
    decraesing(n,a);  
    return 0;
}