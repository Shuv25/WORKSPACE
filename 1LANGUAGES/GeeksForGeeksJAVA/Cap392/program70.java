/*Write a program to find the diff between two distances(in Km) from two diff locations B and C to a common location A. If the user enters any negative distance the program will imediatly raise a user defined exception named NegativeDistanceError */
import java.util.*;
class NegativeDistanceError extends Exception
{
    public NegativeDistanceError(String message)
    {
        super(message);
    }
}
public class program70
{
    public static void main(String[] args) 
    {
         try
         {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter the distance between A and B (in Km):");
            int m=sc.nextInt();
            System.out.println("Enter the distance between A and C (in Km):");
            int n=sc.nextInt();
            shortestPath(m,n);
         }
         catch(NegativeDistanceError e)
         {
            System.out.println("NegativeDistanceErrorException caught");
            e.printStackTrace();
         }
         catch(Exception e1)
         {
            System.out.println("Exception caught");
            e1.printStackTrace();
         }
         finally
         {
            System.out.println("Finally will always run regardless of exception");
         }   
    }
    public static void shortestPath(int m,int n) throws NegativeDistanceError
    {
        if(m<0 || n<0)
        {
            throw new NegativeDistanceError("You have entered negative distance");
        }else if(m>n)
        {
            System.out.println("The shortest distence is A to C:"+n);
        }else
        {
            System.out.println("The shortest distence is A to B:"+m);
        }
    }
}