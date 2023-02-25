#include<iostream>

using namespace std;

int linearSearch(int n,int a[],int num)
{
    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Ente the size of the array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter the element you want to search:";
    cin>>num;

    int result=linearSearch(n,a,num);
    if(result==-1)
    {
        cout<<num<<" is not prsesent inside of the array"<<endl;
    }
    else
    {
        cout<<num<<" is present at "<<result<<" th index"<<endl;
    }
    return 0;
}