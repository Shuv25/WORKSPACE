/*Write a java program using object and class concept to find if a number is prime no if it's not an prime no then find its cube */
import java.util.*;
public class program8 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter a number:");
int n=sc.nextInt();
int i;
if(n==1)
{
    System.out.print("It's not a prime no");
}
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        System.out.println(n*n*n); 
        break;
    }
}
if(i==n)
{
    System.out.println("It's a prime no.");
}    
}
}
