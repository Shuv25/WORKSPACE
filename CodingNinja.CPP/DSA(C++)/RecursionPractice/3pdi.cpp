#include<iostream>

using namespace std;

void pdi(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    pdi(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The numbers in pdi order are:";
    pdi(n);
    return 0;
}