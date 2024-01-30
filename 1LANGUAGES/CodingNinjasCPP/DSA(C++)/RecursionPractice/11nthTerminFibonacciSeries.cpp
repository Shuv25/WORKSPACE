#include<iostream>

using namespace std;

int nthTerminFibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int res=nthTerminFibonacci(n-1)+nthTerminFibonacci(n-2);
    return res;
}

int main()
{
    int n;
    cout<<"Enter which nth term you want to find in fibonacci series:";
    cin>>n;
    cout<<"The "<<n<<" th term you want to find in fibonacci series is:"<<nthTerminFibonacci(n)<<endl;
    return 0;
}