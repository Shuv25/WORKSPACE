#include<iostream>

using namespace std;

void sort(int n,int a[])
{
        for(int i=0;i<(n-1)/2;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
        for(int i=n/2;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
}

void seperate(int n,int a[])
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(a[left]%2!=0)
        {
            left++;
        }
        while (a[right]%2==0)
        {
            right--;
        }

        if(left<right)
        {
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            left++;
            right--;
        }
    }

    for(int i=0;i<n;i++)
    {
        sort(n,a);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Seperate odd and eevn array:";
    seperate(n,a);
    return 0;
}