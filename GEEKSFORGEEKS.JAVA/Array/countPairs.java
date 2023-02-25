import java.util.*;
public class countPairs {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("Enter the size of the array:");
int n=sc.nextInt();
int array[]=new int[n];
System.out.print("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    array[i]=sc.nextInt();
}
System.out.print("Enter the no u want to see the sum:");
int k=sc.nextInt();
pairs(array,n,k);
}
public static void pairs(int array[],int n,int k) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]+array[j]==k)
            {
                count++;
            }
        }
    }
    System.out.println(count);    
}    
}
