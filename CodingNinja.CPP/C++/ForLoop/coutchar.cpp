#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter some characters:";
    int i;
    int countdig=0;
    int countspace=0;
    int countchar=0;
    while (ch!='$')
    {
        ch=cin.get();
        i=ch;
        if(i>63 && i<91 || i>96 && i<123)
        {
            countchar++;
        }
        else if(i>47 && i<58)
        {
            countdig++;
        }
        else
        {
            if(ch==' ')
            {
                countspace++;
            }
        }
    }
    cout<<countchar<<endl;
    cout<<countdig<<endl;
    cout<<countspace<<endl;
    return 0;
}