import java.util.*;
public class sortArray {
    public static void main(String args[]) {
      int n;
      try(Scanner sc =new Scanner(System.in))
      {
            System.out.print("Enter the size of the array:");
            n=sc.nextInt();
            int array[]=new int[n];
            System.out.print("Enter the elements of the array:");
            for(int i=0;i<array.length;i++)
            {
                array[i]=sc.nextInt();
            }
            System.out.print("The sorted array is:");
            for(int i=0;i<array.length;i++)
            {
                for(int j=i+1;j<array.length;j++)
                {
                    int k=0;
                    if(array[i]>array[j])
                    {
                        k=array[i];
                        array[i]=array[j];
                        array[j]=k;
                    }
                }
                System.out.print(array[i]+" ");
            }
            System.out.println();
      }  
    }
}
