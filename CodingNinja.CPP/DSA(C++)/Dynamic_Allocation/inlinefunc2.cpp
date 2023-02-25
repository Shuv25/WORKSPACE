#include<iostream>

using namespace std;

int sum(int *a,int n,int si=0)
{
    int ans=0;
    for(int i=si;i<n;i++)
    {
        ans+=a[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Entre the size of the array:";
    cin>>n;
    int *a=new int [n];//dynamicaly alocating the size of the array
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int result=sum(a,n);

    cout<<"Sum of the array is:"<<result<<endl;

    return 0;
}