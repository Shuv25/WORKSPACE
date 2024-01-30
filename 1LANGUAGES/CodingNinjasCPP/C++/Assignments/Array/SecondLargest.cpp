#include<iostream>
#include<climits>

using namespace std;

void seclargest(int n,int a[])
{
    int max=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>max2 && a[i]<max)
        {
            max2=a[i];
        }
    }

    cout<<max2<<endl;

}

int main()
{
    int n;
    cout<<"Enter the elements of the array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Second largest element of the array:";
    seclargest(n,a);

}