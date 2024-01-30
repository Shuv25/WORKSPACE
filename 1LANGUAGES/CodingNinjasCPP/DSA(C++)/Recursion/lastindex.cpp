#include<iostream>

using namespace std;

int lastindex(int *a,int n,int val)
{
    if(n==0)
    {
        return -1;
    }
    int ans=lastindex(a+1,n-1,val);
    if(val==a[0])
    {
        return 0;
    }
    if(ans==-1)
    {
        if(ans==a[0])
        {
            return 0;
        }
    }
    else
    {
        return ans+1;
    }
    delete[]a;
}

int main()
{
    int n;
    cout<<"Enter the size of the n:";
    cin>>n;
    int *a=new int [n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val;
    cout<<"Enter the element you want to search:";
    cin>>val;

    cout<<lastindex(a,n,val)<<endl;
    return 0;
}