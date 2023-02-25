import java.util.*;
public class maxArray {
public static int largest(int array[]) 
    {
       int max=Integer.MIN_VALUE;
       for(int i=0;i<array.length;i++)
       {
           if(array[i]>max)
           {
               max=array[i];
           }
       }
       return max;
    }
    public static void main(String args[]) 
    {
    int n;
    try(Scanner sc=new Scanner(System.in))
    {
    System.out.print("Enter the size of the array:");
    n=sc.nextInt();
    int array[]=new int [n];
    System.out.print("Enter the elements of the array:");
    for(int i=0;i<array.length;i++)
    {
        array[i]=sc.nextInt();
    }
    System.out.println("The maximum no in array is:"+largest(array));
}    
}
}
