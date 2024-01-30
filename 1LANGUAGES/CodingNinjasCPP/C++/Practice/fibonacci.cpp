#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number till you want to see the fibonacci series:";
    cin>>n;

    int firstnumber=0;
    int secondnumber=1;
    cout<<"The fibonacci series:"<<firstnumber<<" "<<secondnumber<<" ";
    for(int i=0;i<n-2;i++)
    {
        int thirdnumber=firstnumber+secondnumber;
        cout<<thirdnumber<<" ";
        firstnumber=secondnumber;
        secondnumber=thirdnumber;
    }
    return 0;
}