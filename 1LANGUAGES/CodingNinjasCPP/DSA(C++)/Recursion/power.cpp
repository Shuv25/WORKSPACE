#include<iostream>

using namespace std;

int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int smallerProblem=power(n,p-1);
    int biggerProblem=n*smallerProblem;
    return biggerProblem;
}

int main()
{
    int n;
    cout<<"Number:";
    cin>>n;

    int p;
    cout<<"Power:";
    cin>>p;

    int result=power(n,p);
    cout<<result<<endl;
    return 0;
}