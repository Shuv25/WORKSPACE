#include<iostream>

using namespace std;

string replace(string str)
{
    
    if(str.length()==0 || str.length()==1)
    {
        return str;
    }

    if(str[0]=='p' && str[1]=='i')
    {
        string smallOutput=replace(str.substr(2));

        return "3.14"+smallOutput;
    }
    else
    {
        return str[0]+replace(str.substr(1));
    }

}

int main()
{
    string str;
    cout<<"Input:";
    getline(cin,str);

    cout<<replace(str)<<endl;
}