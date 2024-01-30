#include<iostream>
#include<climits>

using namespace std;

int minArray(int *a,int I)
{
    static int min=INT_MAX;
    if(I<0)
    {
        return a[0];
    }
    if(a[I]<min)
    {
        min=a[I];
    }
    minArray(a,I-1);
    return min;
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
    cout<<minArray(a,I)<<endl;
    delete[]a;
    return 0;
}