#include<iostream>

using namespace std;

void mergeSortHelper(int *a,int const start,int const mid,int const end)
{
   auto const n2=mid-start+1;
   auto const n3=end-mid;

   auto *a2=new int [n2];
   auto *a3=new int [n3];

   for(auto i=0;i<n2;i++)
   {
    a2[i]=a[start+i];
   }
   for(auto j=0;j<n3;j++)
   {
    a3[j]=a[mid+1+j];
   }


   auto p=0,q=0;
   int k=start;
   while (p<n2 && q<n3)
   {
        if(a2[p]<=a3[q])
        {
            a[k]=a2[p];
            p++;
        }
        else
        {
            a[k]=a3[q];
            q++;
        }
        k++;
   }
   while (p<n2)
   {
        a[k]=a2[p];
        p++;
        k++;
   }
   while (q<n3)
   {
        a[k]=a3[q];
        q++;
        k++;
   }

   delete[]a2;
   delete[]a3;
} 

void mergeSort(int *a,int const start,int const end)
{
    if(start>=end)
    {
        return;//if the array is empty or size 1 return the array
    }

    auto mid=start+(end-start)/2;

    mergeSort(a,start,mid);
    mergeSort(a,mid+1,end);

    mergeSortHelper(a,start,mid,end);
}

void printArray(int *a, int n)
{
    for (auto i = 0; i < n; i++)
        cout <<a[i] << " ";

    delete[]a;
}

int main()
{
    int n;
    cout<<"Ener the size of the array:";
    cin>>n;
    int *a=new int [n];
    cout<<"Enter the elemenets of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=0;int end=n-1;
    
    printArray(a,n);
    mergeSort(a,start,end);
    cout<<endl;
    printArray(a,n);
    
    return 0;
}