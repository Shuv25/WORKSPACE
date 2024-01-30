import java.util.*;
public class MultidimentionalArray2 {
public static void main(String args[]) 
{
 int m,n;
try(Scanner sc=new Scanner(System.in))
{
    System.out.println("Assign the size of row(m):");
    m=sc.nextInt();
    System.out.println("Assign the size of column(n):");
    n=sc.nextInt();
    int array[][]=new int[m][n];
    System.out.print("Enter the elements of the multidimentional array:");
    for(int i=0;i<array.length;i++)
    {
        for(int j=0;j<array[i].length;j++)
        {
            array[i][j]=sc.nextInt();
        }
    }
    System.out.println("The elements are:");
    for(int i=0;i<array.length;i++)
    {
        for(int j=0;j<array[i].length;j++)
        {
            System.out.print(array[i][j]+" ");
        }
        System.out.print("\n"); 
    } 
}
}    
}
