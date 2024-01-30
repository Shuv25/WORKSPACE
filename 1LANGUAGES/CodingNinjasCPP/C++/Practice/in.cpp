#include<iostream>

using namespace std;

void inser(int n,int a[])
{
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>current)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=current;
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

    int a[n];
    cout<<"Enter the lements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    inser(n,a);

    return 0;
}