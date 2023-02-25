/*Write a program in java to find the smallest and biggest element in an array and find the diffrence.*/
import java.util.*;
public class program11 {
public static int max(int array[],int n)
{
    int max=array[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]>max)
            {
                max=array[j];
            }
        }
    }
    return max;
}
public static int min(int array[],int n)
{
    int min=array[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]<min)
            {
                min=array[i];
            }
        }
    }
    return min;
}
public static int diff(int max,int min)
{
    return max-min;
}
    public static void main(String[] args) {
Scanner sc=new Scanner(System.in);    
System.out.println("Enter the size of the array:");
int n=sc.nextInt();
int array[]=new int[n];
System.out.println("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    array[i]=sc.nextInt();
}
System.out.println("The max element is:"+max(array,n));
System.out.println("The min element is"+min(array,n));
System.out.println("The diff of max and min elemt is:"+diff(max(array,n),min(array,n)));
}    
}
