#include<iostream>

using namespace std;

int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a<<endl;

    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;//printing the first element of array a
    cout<<*(a+1)<<endl;//printing the second element of array a

    for(int i=0;i<10;i++)
    {
        cout<<*(a+i)<<" ";//printing all the element of array a
    }
    cout<<endl;
    cout<<sizeof(a)<<endl;

    int *p=&a[0];
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<endl;
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<endl;

    return 0;
}