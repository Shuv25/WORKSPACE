#include<iostream>

using namespace std;

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }

    int smallOutput=sum(n-1);
    int biggerOutput=n+smallOutput;
    return biggerOutput;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The sumof numbers till "<<n<<" is:"<<sum(n);
    return 0;
}