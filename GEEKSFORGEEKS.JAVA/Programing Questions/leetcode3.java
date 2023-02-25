import java.util.*;
public class leetcode3 {

public static void fibonacci(int n,int array[])
{
    for(int i=1;i<n;i++)
    {
        array[i]=array[i]+array[i-1];
    }
    for (int i = 0; i < n; i++) 
    {
        System.out.print(array[i]+" ");
    }
}    
public static void main(String[] args) {
try(Scanner sc =new Scanner(System.in))
{
    System.out.println("Enter the size of the array:");
    int n=sc.nextInt();
    System.out.println("Enter the elements of the array:");
    int array[]=new int[n];
    for(int i=0;i<n;i++)
    {
        array[i]=sc.nextInt();
    }
    System.out.println("The array is:");
    fibonacci(n,array);
}    
}    
}
