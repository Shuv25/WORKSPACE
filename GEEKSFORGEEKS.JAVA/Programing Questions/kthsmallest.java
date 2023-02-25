import java.util.*;
public class kthsmallest {
public static void kth(int array[],int s,int n)
{
    int k=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                k=array[i];
                array[i]=array[j];
                array[j]=k;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        m=array[s-1];
    }
    System.out.println(m);    
}
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter the size of the array:");
int n=sc.nextInt();
int array[]=new int[n];
System.out.println("Enter the elements:");
for(int i=0;i<n;i++)
{
    array[i]=sc.nextInt();
}
System.out.println("Enter the kth smallest no u want to print:");
int s=sc.nextInt();
System.out.print("The "+s+"rd smallest element is:");
kth(array,s,n);    
}    
}
