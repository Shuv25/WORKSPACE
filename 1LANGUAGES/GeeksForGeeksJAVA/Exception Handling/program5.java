//Multiple Exception
import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;
public class program5 {
public static void main(String[] args) {
    try
    {
        methodA();
        Scanner sc=new Scanner(new File("C:\\Users\\hp\\file1.txt"));
    }
    catch(ArithmeticException e1)
    {
        System.out.println("Arithmetic exception caught........");
        e1.printStackTrace();
    }
    catch(FileNotFoundException e2)
    {
        System.out.println("FileNotFound exception caught........");
        e2.printStackTrace();
    }
    catch(Exception e3)
    {
        System.out.println("Random exception caught........");
        e3.printStackTrace();
    }
    finally
    {
        System.out.println("fianlly will always run regardless of exception");
    }
}
public static void methodA() throws ArithmeticException
{
    int a,b,c;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the value of a:");
    a=sc.nextInt();
    System.out.print("Enter the value of b:");
    b=sc.nextInt();
    if(b==0)
    {
        throw new ArithmeticException();
    }else
    {
        c=a/b;
        System.out.println("The division is:"+c);
    }
}    
}
