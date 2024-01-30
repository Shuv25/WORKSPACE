#include<iostream>

using namespace std;

int bin(int n,int a[], int val)
{
    int start=0;int end=n-1;
    while (start<=end)
    {
        int mid=(start+end)/2;

        if(val==a[mid])
        {
            return mid;
        }
        else if(val<a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
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

    int val;
    cout<<"enter the element you want to search:";
    cin>>val;

    int result=bin(n,a,val);

    cout<<result<<endl;

    return 0;
}
