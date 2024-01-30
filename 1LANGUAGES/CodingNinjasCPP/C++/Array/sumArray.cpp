#include<iostream>

using namespace std;

void sum(int input,int a[])
{
    int sum=0;
    for(int i=0;i<input;i++)
    {
        sum+=a[i];
    }
    cout<<sum;
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The sum of the elements of the array is:";
    sum(n,a);
    return 0;
}