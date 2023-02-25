#include<iostream>

using namespace std;

int digit(int n)
{
    static int count=0;
    if(n>0)
    {
        count++;
        digit(n/10);
    }
    else
    {
        return count;
    }
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int result=digit(n);
    cout<<result<<endl;
    return 0;
}