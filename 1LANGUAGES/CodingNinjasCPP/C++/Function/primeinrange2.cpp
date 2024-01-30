#include<iostream>

using namespace std;

bool isPrime(int input)
{
    for(int i=2;i<input;i++)
    {
        if(input%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int first,last;
    cout<<"Enter the first no:";
    cin>>first;
    cout<<"Enter the last no:";
    cin>>last;

    for(first;first<=last;first++)
    {
        if(isPrime(first))
        {
            cout<<first<<endl;
        }
    }
    return 0;
}