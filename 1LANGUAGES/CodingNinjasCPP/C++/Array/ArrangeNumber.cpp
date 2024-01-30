#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Size?";
    cin>>n;

    int a[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int left=0;
    int right=n-1;

    while (left<right)
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
    cout<<"Seperated odd and even in array:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}