#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int rev=0;
    int i=0;
    while (i<n)
    {
        int remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    cout<<rev<<endl;
    
    return 0;
}