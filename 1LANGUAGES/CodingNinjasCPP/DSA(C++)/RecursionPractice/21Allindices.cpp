#include<iostream>

using namespace std;

int allIndices(int *a,int n,int x,int *b)
{
    if(n==0)
    {
        return 0;
    }
    int ans=allIndices(a,n-1,x,b);
    if(a[n-1]==x)
    {
        b[ans]=n-1;
        return ans+1;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int *a=new int [n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the element you want to search:";
    cin>>x;
    int *b=new int [n];
    int res=allIndices(a,n,x,b);   
    for(int i=0;i<res;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}