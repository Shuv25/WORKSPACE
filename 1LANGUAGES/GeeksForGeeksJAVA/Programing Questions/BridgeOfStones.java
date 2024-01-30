
import java.util.*;
public class BridgeOfStones {
public static void main(String args[]) 
{
try(Scanner sc=new Scanner(System.in))
{
    System.out.print("Enter the value of N: ");
    int N=sc.nextInt();
    System.out.print("Enter the value of X: ");
    int X=sc.nextInt();
    int noOfStones=N/2+1;
    int noOfStonesFromIndia=X/2;
    int noOfStonesFromSrilanka=noOfStones-noOfStonesFromIndia-1;
    if(noOfStonesFromIndia>=noOfStonesFromSrilanka)
    {
        System.out.println(noOfStonesFromSrilanka);
    }else{
        System.out.println(noOfStonesFromIndia);
    }
}    
}
}    
