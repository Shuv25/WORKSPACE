#include<iostream>

using namespace std;

int main()
{
    int first,last,i,j,var;
    cout<<"Enter the first no from where you want to see the prime no:";
    cin>>first;
    cout<<"Enter the last no till you want to see the prime no:";
    cin>>last;
    
    for(i=first+1;i<last;i++)
    {
        var=0;
       for(j=2;j<=i/2;j++)
       {
            if(i%j==0)
            {
                var=1;
                break;
            }
       }
       if(var==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}