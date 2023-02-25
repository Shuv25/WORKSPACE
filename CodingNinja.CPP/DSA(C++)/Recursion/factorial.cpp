#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    int smalerProblem=factorial(n-1);
    int biggerProblem=n*smalerProblem;
    return biggerProblem;
}

int main()
{
    int n;
    cout<<"Number:";
    cin>>n;

    int result=factorial(n);
    cout<<result<<endl;

}