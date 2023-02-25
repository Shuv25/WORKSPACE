#include<iostream>

using namespace std;

int print(int i,int n)
{
    if(i>n)
    {
        return n;
    }
    cout<<i<<" ";
    print(i+1,n);
} 

int main()
{
    int n;
    cout<<"Upper Number:";
    cin>>n;
    int i;
    cout<<"Lower Number:";
    cin>>i;
    int result=print(i,n);
    return 0;
}