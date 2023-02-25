//find missing integer
import java.util.*;
public class missingInt {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("Enter the size of the array:");
int n=sc.nextInt();
int a[]=new int [n];
System.out.println("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    a[i]=sc.nextInt();
}
find(a,n);    
}
public static void find(int a[],int n) 
{
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=n;i++)
    {
        sum1+=i;
    }
    for(int i=0;i<a.length;i++)
    {
        sum2+=a[i];
    }
    System.out.print("The missing element is:"+(sum1-sum2));
    System.out.println();
}    
}
