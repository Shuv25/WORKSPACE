#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no to check positive odd even or negative odd even:";
    cin>>n;

    if(n>0)
    {
        if(n%2==0)
        {
            cout<<"Positive even no"<<endl;
        }else
        {
            cout<<"Positive odd no"<<endl;
        }
    }
    else if(n<0)
    {
        if(n%2!=0)
        {
            cout<<"Negative odd no"<<endl;
        }else
        {
            cout<<"Negative even no"<<endl;
        }
    }
    else
    {
        cout<<"Zero"<<endl;
    }

    return 0;

}