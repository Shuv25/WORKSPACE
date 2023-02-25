#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no till extant you wnat to print the sum of all even no:";
    cin>>n;

    int sum=0;
    int i=1;

    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i+=1;
    }
    cout<<"The sum of all even no till "<<n<<" is: "<<sum<<endl;
    
    return 0;
}