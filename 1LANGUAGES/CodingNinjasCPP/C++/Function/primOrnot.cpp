#include<iostream>

using namespace std;

bool primeOrnot(int input)
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
    int n;
    cout<<"Enter any no to check prime or not:";
    cin>>n;

    bool result=primeOrnot(n);
    cout<<result<<endl;
    return 0;
}