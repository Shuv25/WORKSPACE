#include<iostream>
#include <bits/stdc++.h>
using namespace std;

double gsum(int n)
{
    if(n==1)
    {
        return 1;
    }
    double small=gsum(n-1);
    double ans=1/(pow(2,n))+small;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the num:";
    cin>>n;
    cout<<gsum(n)<<endl;
    return 0;
}