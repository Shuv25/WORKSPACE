#include<iostream>

using namespace std;

void sort3(int n, int a[])
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }    
}

int main()
{ 
    int n;
    cout<<"Size?";
    cin>>n;

    int a[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    sort3(n,a);

    return 0;
}