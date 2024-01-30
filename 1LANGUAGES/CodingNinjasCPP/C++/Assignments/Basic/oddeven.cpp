#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"How many no for you want to print:";
    cin>>num;
    int sumOdd=0;
    int sumEven=0;
    int n;
    cout<<"Enter some random numbers consisting add and even by seperating space:";
    for(int i=1;i<=num;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            sumEven=sumEven+n;
        }
        if(n%2!=0)
        {
            sumOdd=sumOdd+n;
        }
    }
    cout<<"The sum of even no:"<<sumEven<<endl;
    cout<<"The sum of odd no:"<<sumOdd;
    return 0;
}