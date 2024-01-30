#include<iostream>

using namespace std;

void sort(int n,int a[])
{
    for(int i=0;i<(n-1)/2;i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=n/2;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}

void seperate(int n,int a[])
{
    int start=0;int end=n-1;
    while (start<=end)
    {
        while (a[start]%2!=0)
        {
            start++;
        }
        while (a[end]%2==0)
        {
            end--;
        }
        
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
        
    }

    for(int i=0;i<n;i++)
    {
        sort(n,a);
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int n;
    cout<<"Size:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    seperate(n,a);

    return 0;
}