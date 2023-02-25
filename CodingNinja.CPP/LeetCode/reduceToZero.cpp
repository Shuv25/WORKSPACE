#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Entre the value of n:";
    cin>>n;

    int count=0;

    while (n>0)
    {
        if((n & 1)==0)
        {
            n>>=1;
        }
        else
        {
            n--;
        }
        count++;
    }

    cout<<count<<endl;
    
    return 0;
}
