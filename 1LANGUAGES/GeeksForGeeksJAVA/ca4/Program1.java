/*Write a program to find the factorial of a positive int no entered by user. The program throws user defined exception named negativenumber exception if the user enters a negative int no */
/*and display the messgage factorial of negative no is not possible */
import java.io.*;
import java.util.*;
class NegativeNumberException extends Exception
{
    public NegativeNumberException(String message)
    {
        super(message);
    }
}
public class Program1 {
public static void main(String[] args) {

    try
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a integer to count the factorial of that no:");
        int n=sc.nextInt();
        factorial(n);
    }
    catch(NegativeNumberException e)
    {
        System.out.println("NegativeNumberException caught.....");
        e.printStackTrace();
    }
    catch(Exception e1)
    {
        e1.printStackTrace();
    }
}
public static void factorial(int n) throws NegativeNumberException 
{
    int i=1;
    int fact=1;
    if(n<0)
    {
        throw new NegativeNumberException("Factorial of negative number is not possible");        
    }
    else
    {
        while( i <= n ){  
        fact = fact * i;   
        i++;    
    }
    }
    System.out.println("The factorial of "+n+" is: "+fact);     
}    
}
