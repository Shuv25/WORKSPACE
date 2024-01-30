#include<iostream>

using namespace std;

int power(int n,int x)
{
    if(x==0)
    {
        return 1;
    }
    int smallOutput=power(n,x/2);
    int biggerOutput=smallOutput*smallOutput;
    if(x%2==1)
    {
        biggerOutput*=n;
    }
    return biggerOutput;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int x;
    cout<<"Enter the power:";
    cin>>x;
    cout<<"The "<<n<<" to the power "<<x<<" is:"<<power(n,x);
    return 0;
}