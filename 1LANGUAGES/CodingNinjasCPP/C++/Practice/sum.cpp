#include<iostream>

using namespace std;

void sum(int n1,int a[],int n2, int b[])
{
    int n3;

    if(n1>n2)
    {
        n3=n1+1;
    }
    else if(n1<n2)
    {
        n3=n2+1;
    }
    else
    {
        n3=n1+1;
    }

    int c[n3];

    int i=n1-1; int j=n2-1; int k=n3-1; int carry=0;

    while (k>=0)
    {
        if(i>=0 && j>=0)
        {
            c[k]=(a[i]+b[j]+carry)%10;
            carry=(a[i]+b[j]+carry)/10;
            i--;
            j--;
            k--;
        }
        else if(i>=0)
        {
            c[k]=(a[i]+carry)%10;
            carry=(a[i]+carry)/10;
            i--;
            k--;
        }
        else if(j>=0)
        {
            c[k]=(b[j]+carry)%10;
            carry=(b[j]+carry)/10;
            j--;
            k--;
        }
        else
        {
            c[k]=carry;
            carry=0;
            k--;
        }
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

    int a[n1];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }

    int n2;
    cout<<"Enter the size of the second array:";
    cin>>n2;

    int b[n2];
    cout<<"Enter the elements of the second array:";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    sum(n1,a,n2,b);

    return 0;
}