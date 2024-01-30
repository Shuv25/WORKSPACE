import java.util.*;
public class isSorted {
 public static void main(String args[])
{
  int n;
  try(Scanner sc=new Scanner(System.in))
  {
    System.out.println("Enter the size of the array:");
    n=sc.nextInt();
    int array[]=new int[n];
    System.out.print("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        array[i]=sc.nextInt();
    }
    int k=0;
    for(int i=1;i<n;i++)
    {
        if(array[i]<array[i-1])
        {
            k=1;
        }
    }
    if (k==1)
    {
        System.out.println("Its not a sorted array");
    }else
    {
        System.out.println("Its a sorted array");  
    }   
 }   
}
}
