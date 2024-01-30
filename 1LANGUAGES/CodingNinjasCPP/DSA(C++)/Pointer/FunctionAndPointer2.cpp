#include<iostream>

using namespace std;

int sum(int *a,int n)
{
    cout<<sizeof(a)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<sum(a,10)<<endl;
    cout<<sum(a+2,8)<<endl;// we can give a part of arry into a function like here the array will start from second index
    return 0;
}