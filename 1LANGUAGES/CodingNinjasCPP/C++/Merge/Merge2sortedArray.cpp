#include<iostream>

using namespace std;

void merge(int n1,int a[],int n2,int b[])
{
    int n3=n1+n2;

    int c[n3];

    int i=0;int j=0;int k=0;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }

    while (i<n1)
    {
        c[k++]=a[i++];
    }
    while (j<n2)
    {
        c[k++]=b[j++];
    }
    
    for(int i=0;i<n3;i++)
    {
        cout<<c[i]<<" ";
    }
        
}

int main()
{
    int n1;
    cout<<"Enter the size of the first array:";
    cin>>n1;
    cout<<endl;
    int a[n1];
    cout<<"Enter the elemets of the first aarray:";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    int n2;
    cout<<"Enter the size of the second array:";
    cin>>n2;
    cout<<endl;
    int b[n2];
    cout<<"Enter the elements of the second array:";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    merge(n1,a,n2,b);
    
    return 0;
}