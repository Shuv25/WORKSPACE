#include<iostream>

using namespace std;

int rev(int n2)
{
    static int reverse=0,remainder=0;
    if(n2>0)
    {
        remainder=n2%10;
        reverse=reverse*10+remainder;
        rev(n2/10);
    }
    return reverse;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int n2=n; 
    int res=rev(n2);
    if(res==n)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}