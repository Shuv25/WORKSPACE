#include<iostream>

using namespace std;

void reverse(int len,string str[])
{
    for(int i=len-1; i>=0; i--)
    {
        cout<<str[i]<<" ";
    }
}

int main()
{
    int len;
    cout << "Enter array length:";
    cin>>len;
    
    string* str=new string[len];
    cout <<"Enter you sentence:";
    for(int i=0; i<len; i++ )
    {
        cin>>str[i];
    }
    
    reverse(len,str);

    return 0;
}