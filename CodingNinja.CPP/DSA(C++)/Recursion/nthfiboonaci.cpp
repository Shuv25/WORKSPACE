#include<iostream>

using namespace std;

int nth(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int ans=nth(n-1)+nth(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Which term:";
    cin>>n;

    int res=nth(n);
    cout<<res<<endl;
}