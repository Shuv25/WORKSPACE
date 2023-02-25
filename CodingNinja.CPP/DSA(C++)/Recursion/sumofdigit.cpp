#include<iostream>

using namespace std;

int sum(int n)
{
    static int j=0;
    if(n>0)
    {
        int i=n%10;
        j=j+i;
        sum(n/10);
    }
    return j;
}

int main()
{
    int n;
    cout<<"nter a num:";
    cin>>n;
    cout<<sum(n)<<endl;
}