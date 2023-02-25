#include<iostream>

using namespace std;

int check(string str,int start,int end)
{
    if(str.length()==1)
    {
        return 1;
    }
    if(str[start]!=str[end])
    {
        return -1;
    }
    else
    {
        int ans=check(str,start+1,end-1);   
        return 1;
    }
    
}

int main()
{
    string str;
    cout<<"Enter a word:";
    getline(cin,str);

    int start=0;
    int end=str.length()-1;
    int res=check(str,start,end);
    if(res==-1)
    {
        cout<<"False"<<endl;
    }
    else
    {
        cout<<"True"<<endl;
    }
    return 0;
}