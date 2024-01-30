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
        else if(val<a[mid])
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
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
    cout<<"Enter elements:";
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
        cout<<val<<" is not present inside of the array"<<endl;
    }
    else
    {
        cout<<val<<" is present at "<<result<<" th index"<<endl;
    }
    return 0;
}