#include<iostream>

using namespace std;

int main()
{
    int salary;
    char grade;
    cout<<"Enter your basic slary:";
    cin>>salary;
    cout<<"Enter your grade using Uppercase leter from 'A' to 'C':";
    cin>>grade;

    if(grade=='A')
    {
        int total=salary+(0.2*salary)+(0.5*salary)+1700-(0.11*salary);
        cout<<"Your total salary is:"<<total;
    }
    else if(grade =='B')
    {
        int total=salary+(0.2*salary)+(0.5*salary)+1500-(0.11*salary);
        cout<<"Your total salary is:"<<total;        
    }
    else
    {
        int total=salary+(0.2*salary)+(0.5*salary)+1300-(0.11*salary);
        cout<<"Your total salary is:"<<total;
    }

    return 0;
}