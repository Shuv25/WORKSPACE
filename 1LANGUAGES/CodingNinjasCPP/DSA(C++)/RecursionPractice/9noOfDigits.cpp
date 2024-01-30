#include<iostream>

using namespace std;

int digits(int n)
{
    static int count=0;
    if(n>0)
    {
        count++;
        digits(n/10);
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The no of digts in "<<n<<" are:"<<digits(n)<<endl;
    return 0;
}