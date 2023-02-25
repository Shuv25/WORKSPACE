#include<iostream>

using namespace std;

int index(int *a,int n,int val)
{
    if(n==0)
    {
        return -1;
    }
    if(val==a[0])
    {
        return 0;
    }
    int ans=index(a+1,n-1,val);
    if(ans<0)
    {
        return -1;
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
    cout<<"Entre the size of the array:";
    cin>>n;
    int *a=new int [n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val;
    cout<<"Enter the value you want to search:";
    cin>>val;
    cout<<index(a,n,val)<<endl;
    return 0;
}