#include<iostream>

using namespace std;

void median(int a[],int b[],int n,int m)
{
    int len=n+m;

    int c[len];

    int i=0;int j=0;int k=0;

    while (i<n && j<m)
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
    while (i<n)
    {
        c[k++]=a[i++];
    }
    while (j<m)
    {
        c[k++]=b[j++];
    }
    
    int devide;
    double devide2;
    double median;
    int median2;
    
    for(int i=0;i<len;i++)
    {
        if(len%2==0)
        {
            devide=len/2;
            devide2=c[devide]+c[devide-1];
            median=devide2/2;
            cout<<median<<endl;
            break;
        }
        else
        {
            devide=len/2;
            median2=c[devide];
            cout<<median2<<endl;
            break;
        }
    }
    
}

int main()
{
    int n,m;
    cout<<"enter the size of first array:";
    cin>>n;
    cout<<"Enter the size of second array:";
    cin>>m;

    int a[n];
    int b[m];
    cout<<"Enter the elememts of the first array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elememts of the second array:";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    median(a,b,n,m);

    return 0;
}