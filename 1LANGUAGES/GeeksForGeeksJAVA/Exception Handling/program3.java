//Arithmetic exception
public class program3 {
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
}
public static void methodA()
{
    System.out.println("Enter methodA");
    int a=5;int b=0;
    int c=a/b;
    System.out.println(c);
}    
}
