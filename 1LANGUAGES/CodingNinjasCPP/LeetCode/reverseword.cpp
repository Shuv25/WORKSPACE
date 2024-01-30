#include<iostream>

using namespace std;

void rev(string str, int n)
{
    int start=0;
    for(int i=0;i<=n;i++)
    {
        if(str[i]==' ' || i==n)
        {
            int end=i-1;

            while (start<end)
            {
                int temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
    }  

    cout<<str<<endl; 
}

int main()
{
    string str;
    cout<<"Enter a sentance:";
    getline(cin,str);

    int n=str.length();

    rev(str,n);

    return 0;
}