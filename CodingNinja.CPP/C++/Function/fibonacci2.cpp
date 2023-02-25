#include<iostream>

using namespace std;

void fibonacci(int input)
{
    int firstterm=0;
    int secondterm=1;
    for(int i=0;i<=input;i++)
    {
        int thirdterm=firstterm+secondterm;
        cout<<thirdterm<<" ";
        firstterm=secondterm;
        secondterm=thirdterm;
    }
}

int main()
{
    int n;
    cout<<"Enter the no till you want to print fibonacci series:";
    cin>>n;

    cout<<"The fibonacci series till "<<n<<" is:"<<'0'<<" "<<'1'<<" ";
    fibonacci(n);
    return 0;
}