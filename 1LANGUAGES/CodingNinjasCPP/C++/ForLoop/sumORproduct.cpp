#include<iostream>

using namespace std;

int main()
{
    int n;
    int c;
    cout<<"Enter the no:";
    cin>>n;
    cout<<"Enter your choice for sum choose '1' ad for product choose '2':";
    cin>>c;
    int sum=0;
    int product=1;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        
        cout<<sum<<endl;
    }
    else if(c==2)
    {
        for (int i=1;i<=n;i++)
        {
            product=product*i;
        }
        
        cout<<product<<endl;
    }
    else
    {
        cout<<"Enter a valid choice"<<endl;
    }
    return 0;
}