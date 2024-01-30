#include<iostream>

using namespace std;

int dest(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int ans=dest(n-1)+dest(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the dist:";
    cin>>n;
    cout<<dest(n)<<endl;
}