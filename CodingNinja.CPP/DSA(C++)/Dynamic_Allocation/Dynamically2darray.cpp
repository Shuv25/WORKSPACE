#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Entre the size of the row:";
    cin>>n;
    int m;
    cout<<"Entre the size of the column:";
    cin>>m;
    int **p=new int*[n];//dynamically creating a 2d array
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        p[i]=new int [m];
        for(int j=0;j<m;j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"------------------:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    // now i have to delete the array becuase we have to deallocte the memory from heap and it's mendatory

    for(int i=0;i<n;i++)
    {
        delete [] p[i];// here i am deleting all the pointer array inside the double pointer array
    }
    delete []p;// now i m dleteing the pointer array

    return 0;
}