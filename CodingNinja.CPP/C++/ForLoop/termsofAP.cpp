#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int count=0;
    for(int i=1;count<n;i++)
    {
        int N=3*i+2;
        if(N%4!=0)
        {
            cout<<N<<" ";
            count++;
        }
    }
    return 0;
}