import java.util.*;
public class program4 {
public static void main(String[] args) {
try
{
    methodA();
    System.out.println("Exit try block");
}
catch(ArithmeticException e)
{
    System.out.println("Arithmetic exception caught......");
    e.printStackTrace();
}
finally
{
    System.out.println("Fianlly will always run regardless of exception");
}    
}
public static void methodA() throws ArithmeticException
{
    System.out.println("Enter methodA");
    int a=10;int b;
    int c;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the value of b:");
    b=sc.nextInt();
    if(b==0)
    {
        throw new ArithmeticException();
    }else
    {
        c=a/b;
        System.out.println(c);
    }
    System.out.println("Exit methodA");
}    
}
