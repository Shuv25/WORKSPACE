#include<iostream>

using namespace std;

void insertion(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        int c=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>c)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=c;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Size:";
    cin>>n;

    int a[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    insertion(n,a);
    return 0;
}