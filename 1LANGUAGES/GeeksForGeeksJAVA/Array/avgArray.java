import java.util.*;
public class avgArray 
{
    public static int average(int array[]) 
    {
        int sum=0;
        for(int i=0;i<array.length;i++)
        {
            sum=sum+array[i];
        }
        int avg=sum/array.length;
        return avg;
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
    System.out.println("The average of all the elements in  array is:"+average(array));
}
}
}
