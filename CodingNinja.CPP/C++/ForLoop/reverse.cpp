#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int count=0;
    int rev=0;
    int remainder;
    while (n>0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
    }
    cout<<rev;
    return 0;
}