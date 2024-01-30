import  java.util.*;
public class countDistinct {
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
    int count=1;
    for(int i=1;i<array.length;i++)
    {
         int j=0;
         for(j=0;j<i;j++)
         {
            if(array[i]==array[j])
            {
                break;
            }
         }
         if(i==j)
            {
                count++;
            }
    }
    System.out.println(count);
 }   
}
}
