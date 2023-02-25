#include<iostream>

using namespace std;

int multi(int n,int m,int i)
{
    if(i>m)
    {
        return 0;
    }
    int smallOutput=multi(n,m,i+1);
    int bigProblem=n+smallOutput;
    return bigProblem;
}

int main()
{
    int n;
    cout<<"enter the first no:";
    cin>>n;
    int m;
    cout<<"Enter the second no:";
    cin>>m;
    int i=1;
    cout<<multi(n,m,i)<<endl;
    return 0;
}