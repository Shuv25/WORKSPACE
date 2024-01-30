/*take an array input an remove the lowest and higest value */
import java.util.*;
public class leetcode2 {
public static void main(String[] args) {
try(Scanner sc=new Scanner(System.in))
{
    System.out.println("Enter the size of the array:");
    int n=sc.nextInt();
    System.out.println("Enter the element of the array:");
    int array[]=new int[n];
    for(int i=0;i<n;i++)
    {
        array[i]=sc.nextInt();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int k=0;
            if(array[i]>array[j])
            {
                k=array[i];
                array[i]=array[j];
                array[j]=k;
            }
        }
    }
    System.out.println("The array after removing lowest and highest value:");
    for(int i=1;i<n-1;i++)
    {
        System.out.println(array[i]);
    }
}    
}    
}
