#include<iostream>

using namespace std;

void lastIndices(int *a,int n,int x,int I)
{
    if(a[I]==x)
    {
        cout<<I;
        return;
    }
    lastIndices(a,n,x,I+1);
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int *a=new int [n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the element you want to search:";
    cin>>x;
    int I=n-1;
    cout<<"The element you want to find is in ";
    lastIndices(a,n,x,I);
    cout<<" th index"<<endl;
    delete[]a;
    return 0;
}