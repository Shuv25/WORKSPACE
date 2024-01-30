#include<iostream>

using namespace std;

int main()
{

    int *p =new int;//dynamiclally alocationg
    *p=10;
    cout<<*p<<endl;

    delete p;//we have to delete the dynamically aloocated memory that is stored in heap and it's mendatory
    
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int *a=new int[n];//dyamically allocating an array
    cout<<"enter the elements of the array:";//for array deletion we have to use 'delete []a'
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    cout<<max<<endl;
    return 0;
}