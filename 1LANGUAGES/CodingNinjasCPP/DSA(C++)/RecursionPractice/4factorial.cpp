#include<iostream>

using namespace std;

int facto(int n)
{
    if(n==1)
    {
        return 1;
    }
    int smallOutput=facto(n-1);
    int biggerOutput=n*smallOutput;
    return biggerOutput;
}

int main()
{
    int n;
    cout<<"Enter a number to find it's factorial:";
    cin>>n;
    cout<<"The factoral of "<<n<<" is:"<<facto(n);
    return 0;
}