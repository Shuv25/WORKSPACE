#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Entre a no to check if the no is prime or not:";
    cin>>n;

    if(n==0 && n==1)
    {
        cout<<"It's not a prime no"<<endl;
    }

    int i=2;

    while (i<n)
    {
        if(n%i==0)
        {
            cout<<n<<" is not prime no"<<endl;
            break;
        }
        i+=1;
    }
    if(i==n)
    {
        cout<<n<<" is a prime no"<<endl;
    }
    return 0;
}