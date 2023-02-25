#include<iostream>

using namespace std;

void sel(int n,int a[])
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

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sel(n,a);

    return 0;
}