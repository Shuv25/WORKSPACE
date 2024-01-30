#include<iostream>

using namespace std;

string replace(string str,char x)
{
    if(str.length()==0)
    {
        return "";
    }
    if(str[0]==x)
    {
        return replace(str.substr(1),x);
    }
    return str[0]+replace(str.substr(1),x);
}

int main()
{
    string str;
    cout<<"Input:";
    getline(cin,str);
    
    char x='x';
    cout<<replace(str,x)<<endl;
    return 0;
}