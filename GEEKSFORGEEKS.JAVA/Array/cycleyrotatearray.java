//Write a program to cyclically rotate an array by one
import java.util.*;
public class cycleyrotatearray {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("Enter the size of the array:");
int n=sc.nextInt();
int a[]=new int [n];
System.out.print("Enter the elements of the array:");    
for(int i=0;i<n;i++)
{
    a[i]=sc.nextInt();
}
cycle(a,n);
}
public static void cycle(int a[],int n) 
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=a[n-1];
        a[n-1]=a[i];
        a[i]=k;
    }
    System.out.print("Cyclically rotate array is:");
    for(int i=0;i<n;i++)
    {
        System.out.print(a[i]+" ");
    }
    System.out.println();    
}    
}
