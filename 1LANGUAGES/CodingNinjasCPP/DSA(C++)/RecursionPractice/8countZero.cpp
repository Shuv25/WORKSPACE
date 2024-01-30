#include<iostream>

using namespace std;

int countZero(int n)
{
    static int count=0;
    if(n>0)
    {
        int res=n%10;
        if(res==0)
        {
            count++;
        }
        countZero(n/10);
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"No of zeros are:"<<countZero(n)<<endl;
    return 0;
}