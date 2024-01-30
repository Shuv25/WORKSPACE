//Q.1:Max and Min element of the array
import java.util.*;
public class MaxAndMin1{

    public static int  Max(int array[]) 
    {
        int max=Integer.MIN_VALUE;
        for(int i=0;i<array.length;i++ )
        {
            if(array[i]>max)
            {
                 max=array[i];
            }
        }
        return max;    
    }
    public static int Min(int array[]) 
    {
        int min=Integer.MAX_VALUE;
        for(int i=0;i<array.length;i++)
        {
            if(array[i]<min)
            {
                min=array[i];
            }
        }
        return min;
    }
        public static void main(String[] args) {
        try(Scanner sc=new Scanner(System.in))
        {
            System.out.print("Enter the size of the array:");
            int n=sc.nextInt();
            int array[]=new int[n];
            System.out.print("Enter the elements of the array:");
            for(int i=0;i<array.length;i++)
            {
                array[i]=sc.nextInt();
            }
            System.out.println("The maximum element of the array is:"+Max(array)+" and the minimum element of the array is:"+Min(array));
        }
    }    
    
        
}
