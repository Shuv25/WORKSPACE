#include<iostream>

using namespace std;

int binarysearch(int n,int a[],int val)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(val==a[mid])
        {
            return mid;
        }
        else if(val>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    -1;
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

    int val;
    cout<<"Enter the element you want to search:";
    cin>>val;

    int result=binarysearch(n,a,val);
    
    if(result==-1)
    {
        cout<<val<<" is not inside of the array"<<endl;
    }
    else
    {
        cout<<val<<" is at "<<result<<" th index of the array"<<endl;
    }
    return 0;
}