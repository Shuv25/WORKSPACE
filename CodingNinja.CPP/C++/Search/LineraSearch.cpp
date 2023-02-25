#include<iostream>

using namespace std;

int lineraSearch(int n,int a[],int num)
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
    cout<<"Enter the size of the array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter the no you want to search in num:";
    cin>>num;

    int result=lineraSearch(n,a,num);
    
    if(result==-1)
    {
        cout<<num<<" is not present inside of the array"<<endl;
    }
    else
    {
        cout<<num<<" is present at "<<result<<" th index"<<endl;
    }
    return 0;
}