#include<iostream>

using namespace std;

int lenght(char name[])
{
    int count=0;
    for(int i=0;i<100;i++)
    {
        if(name[i]!='\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    char name[100];
    cout<<"Enter your name:";
    cin.getline(name,100);// I am using cin.getline here to count the spaces also because 
    //in char array it's stops when there is any null value(space,tab,\n etc)

    cout<<lenght(name)<<endl;

    return 0;
}