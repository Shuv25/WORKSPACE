#include<iostream>

using namespace std;

void eular(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<"Pre "<<n<<endl;
    eular(n-1);
    cout<<"In "<<n<<endl;
    eular(n-1);
    cout<<"Post "<<n<<endl;
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"----------------------:"<<endl;
    eular(n);
}