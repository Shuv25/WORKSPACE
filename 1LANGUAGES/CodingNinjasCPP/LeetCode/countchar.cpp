#include<iostream>

#define ASCII_SIZE 256

using namespace std;

void most(string str)
{
    int n=str.length();
    int count[ASCII_SIZE]={0};
    int max=0;
    char res;
    for(int i=0;i<n;i++)
    {
        count[str[i]]++;
        if(count[str[i]]>max)
        {
            max=count[str[i]];
            res=str[i];
        }
    }
    cout<<res<<endl;
}

int main()
{
    string str;
    cout<<"enter a sentance:";
    getline(cin,str);

    most(str);
    return 0;
}