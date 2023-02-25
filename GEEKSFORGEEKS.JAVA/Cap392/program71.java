/*Write a java program to remove dupplicate values from an array of size n. If originally contains no duplicate values then raise an exception named UniqueElementException */
import java.util.*;
class UniqueElementException extends Exception
{
    public UniqueElementException(String message)
    {
        super(message);
    }
}
public class program71 {
public static void main(String[] args) {
    try
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elemets of the array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        removeDuplicates(arr,n);
    }
    catch(UniqueElementException e)
    {
        System.out.println("UniqueElementException cought");
        e.printStackTrace();
    }
    finally
    {
        System.out.println("Finally will always run");
    }    
}
public static void removeDuplicates(int arr[],int n) throws UniqueElementException
{
    Arrays.sort(arr);
    int j=0;
    for(int k=0;k<n-1;k++)
    {
        if(arr[k]!=arr[k+1])
        {
            throw new UniqueElementException("...");
        }else
        {
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]!=arr[i+1])
                {   
                    arr[j++]=arr[i];
                }
            }
            arr[j]=arr[n-1];
            System.out.print("Array after removing duplicate values:");
            for(int i=0;i<j+1;i++)
            {
                System.out.println(arr[i]);
            }
        }
    }
}    
}
