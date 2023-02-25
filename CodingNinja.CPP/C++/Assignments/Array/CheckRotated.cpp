#include<iostream>
#include<climits>

using namespace std;

int check(int n, int a[])
{
   int min=a[0];
   int min_index=0;

   for(int i=0;i<n;i++)
   {
        if(a[i]<min)
        {
            min=a[i];
            min_index=i;
        }
   }
   return min_index;
}

int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;

    int a[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int result=check(n,a);

    if(result>=1)
    {
        cout<<"The array is rotatd upto "<<result<<" elements"<<endl;
    } 
    else
    {
        cout<<"No the array is not rotated"<<endl;
    }

    return 0;
}