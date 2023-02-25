/*Addition of two matrixes */
import java.util.*;
public class program16 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("Enter the size of row of first array:");
int m=sc.nextInt();
System.out.print("Enter the size of column of first array:");
int n=sc.nextInt();
int array1[][]=new int[m][n];
System.out.println("Enter the elements of the first array:");
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        array1[i][j]=sc.nextInt();
    }
}
System.out.print("Enter the size of row of second array:");
int p=sc.nextInt();
System.out.print("Enter the size of column of second array:");
int q=sc.nextInt();
int array2[][]=new int[p][q];
System.out.println("Enter the elements of the second array:");
for(int i=0;i<p;i++)
{
    for(int j=0;j<q;j++)
    {
        array2[i][j]=sc.nextInt();
    }
}
combine(array1,array2,m,n);
}
public static void combine(int array1[][],int array2[][],int n,int m)
{
    int array3[][]=new int[m][n];
    //if(array1.length==array2.length)
    //{
        System.out.println("The addition of array1 and array2 is:");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                array3[i][j]=array1[i][j]+array2[i][j];
                System.out.print(array3[i][j]+" ");
            }
            System.out.println();
        }
    //}else
   // {
       // System.out.println("The size of both arrays must be same, please do it again.");
   // }    
}    
}
