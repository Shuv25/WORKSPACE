#include<iostream>

using namespace std;

void push(int n,int a[])
{
    int z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==z)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the elements of the array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    push(n,a);

    return 0;
}