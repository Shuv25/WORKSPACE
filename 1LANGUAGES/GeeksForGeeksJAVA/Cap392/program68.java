public class program68 {
public static void main(String[] args) {
    try
    {
        int balence;
        balence=Integer.parseInt(args[0]);
        just(balence);
    }
    catch(ArrayIndexOutOfBoundsException e)
    {
        e.printStackTrace();
    }
    finally
    {
        System.out.println("Finally will always run ");
    }
}
public static void just(int balence) throws ArrayIndexOutOfBoundsException
{
    if(balence<0)
    {
        throw new ArrayIndexOutOfBoundsException();
    }
    else
    {
        System.out.println("Your program runs succesfully");
    }
}    
}
