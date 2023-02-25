#include<iostream>

using namespace std;

int binary(int n,int a[],int val)
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
    return -1;   
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

    int val;
    cout<<"Enter the value you want to serach:";
    cin>>val;

    int result=binary(n,a,val);
    if(result==-1)
    {
        cout<<val<<" is not present inside of the array";
    }
    else
    {
        cout<<val<<" is present at "<<result<<" th index of the array"<<endl;
    }
    return 0;
}