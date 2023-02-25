#include<iostream>

using namespace std;

int count(int n)
{
    static int check=0;
    if(n>0)
    {
        if(n%10==0)
        {
            check++;
        }
        count(n/10);
    }
    return check;
}

int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<count(n)<<endl;      
    return 0;
}