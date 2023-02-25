#include<iostream>
#include<climits>

using namespace std;

void sort(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
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
    sort(n,a);

    return 0;
}