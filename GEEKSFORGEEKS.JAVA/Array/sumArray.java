import java.util.*;
public class sumArray {
    public static int addition(int array[]) 
    {
      int sum=0;
      for(int i=0;i<array.length;i++)
      {
          sum=sum+array[i];
      }
      return sum;  
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
    System.out.println("The addition of all the elements in  array is:"+addition(array));
}
}
}
