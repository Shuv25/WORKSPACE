#include<iostream>

using namespace std;


int factorial(int input)
{
    int prod=1;
    for(int i=1;i<=input;i++)
    {
        prod*=i;
    }
    return prod;
}

int main()
{
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;

    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_n_minus_r=factorial(n-r);

    int result=fact_n/(fact_r*fact_n_minus_r);

    cout<<"Combination is:"<<result<<endl;

    return 0;
}
