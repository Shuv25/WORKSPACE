#include<iostream>

using namespace std;

void merge(int n,int a[],int n2,int b[])
{
    
    int n3=n+n2;

    int c[n3];
    int i=0;int j=0;int k=0;

    while (i<n && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while (j<n2)
    {
         c[k++]=b[j++];       
    }

    for(int i=0;i<n3;i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int n;
    cout<<"Enter the size of the first array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the first array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int n2;
    cout<<"Enter the size of the second array:";
    cin>>n2;

    int b[n2];
    cout<<"enter the elements of the second array:";
    for(int i=0;i<n2;i++)
    {
        cin>>a[i];
    }

    merge(n,a,n2,b);

    return 0;
}