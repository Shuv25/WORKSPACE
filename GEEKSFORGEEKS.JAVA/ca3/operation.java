/* design a class named of operationClass and added to a user defined packages operationPac to perform the following operation a)oddEven(int n)
 * b)prime (int n)
 * now import opertion class ina new class named current class saved in adiferent package current pack
 */
package operationPack;
import java.util.*;
public class operation {
public void fun1()
{
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter an integer:");
    int n=sc.nextInt();
    oddEven(n);
    prime(n);
}
public void oddEven(int n)
{
    if(n%2==0)
    {
        System.out.println("Its an even no");
    }else
    {
        System.out.println("Its an odd  no");
    }
}
public void prime(int n)
{
    int i;
    if(n==1 || n==0)
    {
        System.out.print("It's not a prime no");
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            System.out.println("It's not a prime no"); 
            break;
        }
    }
    if(i==n)
    {
        System.out.println("It's a prime no.");
    }
}    
}
