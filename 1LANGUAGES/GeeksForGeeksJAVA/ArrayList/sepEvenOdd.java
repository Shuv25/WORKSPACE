import java.util.*;
public class sepEvenOdd {
public static void main(String[] args) {
try(Scanner sc=new Scanner(System.in))
{
    System.out.println("Enter the size of the array:");
    int n=sc.nextInt();
    int array[]=new int[n];
    System.out.println("Enter the elements of the array:");
    for(int i=0;i<array.length;i++)
    {
        array[i]=sc.nextInt();
    }
    System.out.println("The even  numbers are:");
    even(array);
    System.out.println("The odd numbers are:");
    odd(array);
}    
}
public static void even(int array[]) 
{
  for(int i=1;i<=array.length;i++)
  {
    if(i%2==0)
    {
        System.out.println(i);
    }
  }

}
public static void odd(int array[]) 
{
  for(int i=1;i<=array.length;i++)
  {
    if(i%2!=0)
    {
        System.out.println(i);
    }
  }
}
}
