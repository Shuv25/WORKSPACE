#include<iostream>
#include<cstring>

using namespace std;

void min(char c[],char c2[])
{
    int n=strlen(c);

    int si=0,ei=0;

    int min_len=n, min_start_index=0;

    while (ei<=n)
    {
        if(ei<n && c[ei]!=' ')
        {
            ei++;
        }
        else
        {
            int current_length=ei-si;
            
            if(current_length<min_len)
            {
                min_len=current_length;
                min_start_index=si;
            }
            ei++;
            si=ei;
        }
    }

    for(int i=0;i<min_len;i++)
    {
        c2[i]=c[min_start_index++];
    }   
    cout<<c2<<endl;
}

int main()
{
    char c[100], c2[100];
    cout<<"Enter a sentance:";
    cin.getline(c,100);

    min(c,c2);

    return 0;
}