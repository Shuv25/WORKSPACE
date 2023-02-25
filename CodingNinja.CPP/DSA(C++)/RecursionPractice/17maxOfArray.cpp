#include<iostream>

using namespace std;

int maxArray(int *a,int I)
{
    static int max=0;
    if(I<0)
    {
        return a[0];
    }
    if(a[I]>max)
    {
        max=a[I];
    }
    maxArray(a,I-1);
    return max;
}

int main()
{
    int n;
    cout<<"Enter the size f the array:";
    cin>>n;
    int *a=new int [n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"------------------------"<<endl;
    int I=n-1;//I is the index
    cout<<maxArray(a,I)<<endl;
    delete[]a;
    return 0;
}