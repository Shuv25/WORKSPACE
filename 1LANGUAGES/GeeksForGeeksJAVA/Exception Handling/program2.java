//Unchecked exception 
public class program2 {
public static void main(String[] args) {
    int a,b,sum;
    try
    {
        a=Integer.parseInt(args[0]);
        b=Integer.parseInt(args[1]);
        sum=a+b;
        System.out.println("The sum is:"+sum);
    }
    catch(ArrayIndexOutOfBoundsException e)
    {
        System.out.println("Insufficiant no to perform arithmetic");
    }
    finally
    {
        System.out.println("Finally will always run regradless of exception in try-catch");
    }
}    
}
