#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int root;
    for(int i=1;i<=n;i++)
    {
        if(i*i<=n)
        {
            root=n/i;
        }
    }
    cout<<root;
    return 0;
}