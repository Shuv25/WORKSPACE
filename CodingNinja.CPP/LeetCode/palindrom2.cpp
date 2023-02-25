#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a sentence:";
    getline(cin,str);

    string temp="";

    for(int i=0;i<str.length();i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            temp+=tolower(str[i]);
        }
    }
    str=temp;
    cout<<temp<<endl;

    int n=temp.length();

    int i=0;int j=n-1;

    while (i<j)
    {
        int k=temp[i];
        temp[i]=temp[j];
        temp[j]=k;
        i++;
        j--;
    }
    
    for(int i=0;i<n;i++)
    {
        if(str[i]==temp[i])
        {
            cout<<"It's palindrom"<<endl;
            break;
        }
        else
        {
            cout<<"Not palindrom"<<endl;
            break;
        }
    }

}