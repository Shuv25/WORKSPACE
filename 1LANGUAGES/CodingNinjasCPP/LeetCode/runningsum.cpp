#include<iostream>

using namespace std;

void runningsum(int a[],int n)
{
    int temp[n];

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        temp[i]=sum;   
    }

    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
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

    runningsum(a,n);
    return 0;
}