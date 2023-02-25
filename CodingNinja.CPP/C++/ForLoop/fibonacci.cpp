#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no till you want to print the fibonacci series:";
    cin>>n;

    int firstTerm=0;
    int secondTerm=1;
    cout<<firstTerm<<" "<<secondTerm<<" ";
    for(int i=0;i<=n;i++)
    {
        int thirdTerm=firstTerm+secondTerm;
        cout<<thirdTerm<<" ";
        firstTerm=secondTerm;
        secondTerm=thirdTerm;    
    }
    return 0;
}