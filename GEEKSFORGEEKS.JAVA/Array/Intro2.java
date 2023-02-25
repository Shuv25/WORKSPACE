import java.util.*;
public class Intro2 {
    public static void main(String args[])
    {
        int n;
        try (Scanner sc = new Scanner (System.in)) {
            System.out.println("Enter the size of the array:");
            n=sc.nextInt();
            int array[]=new int[n];
            System.out.println("Enter the elemenst:");
            for (int i=0;i<n;i++)
            {
                array[i]=sc.nextInt();
            }
            System.out.print(("The array elements are:"));
            for (int i=0;i<n;i++)
            {
                System.out.print(array[i]+" ");
            }
            System.out.println();
        }
    }
}
