#include<iostream>
#include<climits>

using namespace std;

void largest(int input,int a[])
{
    int max=INT_MIN;
    for(int i=0;i<input;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<max;
}
void smallest(int input,int a[])
{
    int min=INT_MAX;
    for(int i=0;i<input;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<min;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int a[n];

    cout<<"Enter the "<<n<<" elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The smallest element in the array is:";
    smallest(n,a);
    cout<<"\nThe largest element in the array is:";
    largest(n,a);
    return 0;
}