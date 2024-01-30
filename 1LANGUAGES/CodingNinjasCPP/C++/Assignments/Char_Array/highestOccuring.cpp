#include<iostream>
#include<cstring>

#define ASCII_SIZE 256


using namespace std;

void occur(char c[])
{
    int n=strlen(c);

    int count[ASCII_SIZE]={0};

    int max=0;

    char result;

    for(int i=0;i<n;i++)
    {
        count[c[i]]++;
        if(max<count[c[i]])
        {
            max=count[c[i]];
            result=c[i];
        }
    }
    cout<<result<<endl;
}

int main()
{
    char c[100];
    cout<<"Enter the string:";
    cin.getline(c,100);

    occur(c);

    return 0;
}