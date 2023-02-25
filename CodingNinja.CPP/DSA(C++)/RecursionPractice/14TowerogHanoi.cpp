#include<iostream>

using namespace std;

void tah(int n,char t1,char t2,char t3)
{
    if(n==0)
    {
        return;
    }
    tah(n-1,t1,t3,t2);//it will print the instraction of moving n-1 disk from t1 to t3 using t2
    cout<<"Move "<<n<<" from "<<t1<<" to "<<t2<<endl;
    tah(n-1,t3,t2,t1);//it will print the instraction of moving n-1 disk from t3 to t2 using t1
}

int main()
{
    int n;
    cout<<"Enter the no of disk:";
    cin>>n;
    char t1,t2,t3;
    cout<<"Enter the name of tower1:";
    cin>>t1;
    cout<<"Enter the name of tower2:";
    cin>>t2;
    cout<<"Enter the name of tower3:";
    cin>>t3;
    cout<<"----------------------:"<<endl;
    tah(n,t1,t2,t3);
    return 0;
}