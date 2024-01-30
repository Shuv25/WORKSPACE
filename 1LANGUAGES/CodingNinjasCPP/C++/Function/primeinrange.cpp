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
    int n;
    cout<<"Enter the no till you want see numbers that  are prime :";
    cin>>n;

    for(int x=2;x<=n;x++)
    {
        if(isPrime(x))
        {
            cout<<x<<endl;
        }
    }

}