#include<iostream>

using namespace std;

void replace(char c[],char a, char b)
{
    for(int i=0;i<100;i++)
    {
        if(c[i]==a)
        {
            c[i]=b;
        }
    }

    cout<<c<<endl;
}

int main()
{
    char c[100];
    cout<<"Enter a word:";
    cin>>c;

    cout<<endl;
    
    char a;
    cout<<"Enter the char that you want to replace:";
    cin>>a;
    
    cout<<endl;
    
    char b;
    cout<<"With which char:";
    cin>>b;
    
    cout<<endl;
    
    replace(c,a,b);

    return 0;
}