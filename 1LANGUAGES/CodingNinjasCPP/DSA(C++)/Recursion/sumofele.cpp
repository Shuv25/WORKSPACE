#include<iostream>

using namespace std;

int sum(int *a,int n)
{
    if(n<=0)
    {
        return 0;
    }
    return (sum(a,n-1)+a[n-1]);
    delete[]a;
}

int main()
{
    int n;
    cout<<"Size:";
    cin>>n;

    int *a=new int[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n)<<endl;
}