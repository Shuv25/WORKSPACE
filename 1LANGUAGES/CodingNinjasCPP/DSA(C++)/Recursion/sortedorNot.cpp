#include<iostream>

using namespace std;

int isSorted(int *a,int n)
{
    if(n==0 || n==1)
    {
        return true;
    }

    if(a[0]>a[1])
    {
        return false;
    }

    bool issmallersorted=isSorted(a+1,n-1);
    return issmallersorted;
    delete[]a;
}

int main()
{
    int n;
    cout<<"Entre the size of the array:";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter the elements fo the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<isSorted(a,n)<<endl;
}