#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the no:";
    cin>>n;

    int num;
    int slargest=0;
    int largest=0;
    int i=0;
    
    cout<<"Enter the no:"; 
    while (i<n)
    {
         cin>>num;

        if(i==0)
        {
            largest=num;
        }
        else if(num>largest)
        {
            slargest=largest;
            largest=num;
        }
        i++;
    }
    cout<<"The second largest element is:"<<slargest;
    return 0;
}