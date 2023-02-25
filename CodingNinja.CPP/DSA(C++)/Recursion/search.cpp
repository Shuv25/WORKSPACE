#include<iostream>

using namespace std;

int search(int n,int *a,int val)
{

    if(n<=0)
    {
        return -1;
    }
    if(val==a[0])
    {
        return 1;
    }
    search(n-1,a+1,val);
    delete[]a;
}

int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;

    int*a=new int [n];
    cout<<"Entre the elemnts of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val;
    cout<<"Enter the value you to serach:";
    cin>>val;

    int res=search(n,a,val);
    if(res==-1)
    {
        cout<<"False"<<endl;
    }
    else
    {
        cout<<"True"<<endl;
    }
    return 0;
}