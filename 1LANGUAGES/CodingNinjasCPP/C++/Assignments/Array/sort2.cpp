#include<iostream>

using namespace std;

void sort2(int n, int a[])
{
    for(int i=0;i<n;i++)
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
    cout<<"Size?";
    cin>>n;

    int a[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    sort2(n,a);

    return 0;
}