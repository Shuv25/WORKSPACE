#include<iostream>

using namespace std;

void printArray(int *a,int I)
{
    if(I<0)
    {
        return;
    }
    cout<<a[I]<<" ";
    printArray(a,I-1);
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
    printArray(a,I);
    delete[]a;
    return 0;
}