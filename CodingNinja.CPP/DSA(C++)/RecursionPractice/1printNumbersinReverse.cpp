#include<iostream>

using namespace std;

void printNuminRev(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printNuminRev(n-1);
}

int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<"The numbers are:";
    printNuminRev(n);
    return 0;
}
