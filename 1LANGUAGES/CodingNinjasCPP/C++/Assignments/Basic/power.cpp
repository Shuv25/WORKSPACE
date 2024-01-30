#include<iostream>

using namespace std;

int main()
{
    int n;
    int p;
    cout<<"Enter the no:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>p;

    int i=0;
    int result=1;
    cout<<p<<" Power of "<<n<<" is:";
    while(i<p)
    {
        result=result*n;
        i=i+1;
    }
    cout<<result;
    return 0;
}