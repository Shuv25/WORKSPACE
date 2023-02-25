#include<iostream>

using namespace std;

int saydigit(int n,string arr[])
{
    if(n==0)
    {
        return '\0';
    }
    int digit=n%10;
    n=n/10;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter the digit:";
    cin>>n;

    cout<<saydigit(n,arr);
}