#include<iostream>

using namespace std;

void series(int n)
{
    static int i=0,j=1,k;
    if(n>0)
    {
        cout<<i<<" ";
        k=i+j;
        i=j;
        j=k;
    }
    n--;
    series(n);
}

int main()
{
    int n;
    cout<<"Enter the count:";
    cin>>n;

    cout<<endl;
    series(n);
}

