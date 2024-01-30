#include<iostream>

using namespace std;

void rotate(int n,int a[],int input)
{
    int temp[n];

    int k=0;

    for(int i=input;i<n;i++)
    {
        temp[k++]=a[i];
    }

    for(int i=0;i<input;i++)
    {
        temp[k++]=a[i];
    }

    for(int i=0;i<n;i++)
    {
        a[i]=temp[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }   
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<endl;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int input;
    cout<<"How many element you want to rotate:";
    cin>>input;

    cout<<"Rotated array:";
    rotate(n,a,input);

    return 0;
}