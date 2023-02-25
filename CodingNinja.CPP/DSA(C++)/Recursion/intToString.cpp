#include<iostream>
#include<cmath>
using namespace std;

int convert(string str)
{
    int n=str.length();

    if(n==1)
    {
        return (str[0]-'0');
    }
    double y = convert(str.substr(1));
 
    
    double x = str[0] - '0';
 
    x = x * pow(10, str.length() - 1) + y;
    return int(x);
}

int main()
{
    string str;
    cout<<"INPUT:";
    getline(cin,str);
    cout<<convert(str)<<endl;
    return 0;
}