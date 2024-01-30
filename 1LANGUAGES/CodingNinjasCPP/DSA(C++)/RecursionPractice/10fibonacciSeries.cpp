#include<iostream>

using namespace std;

void fibonacci(int n)
{
    static int fisrtTerm=0,secondTerm=1,thirdTerm=0;
    if(n==0)
    {
        return;
    }
    fibonacci(n-1);
    cout<<fisrtTerm<<" ";
    thirdTerm=fisrtTerm+secondTerm;
    fisrtTerm=secondTerm;
    secondTerm=thirdTerm;
}

int main()
{
    int n;
    cout<<"Enter a no till you want to print the fibonacci series:";
    cin>>n;
    cout<<"the fibonnacci series till "<<n<<" th term is:";
    fibonacci(n);
    return 0;
}