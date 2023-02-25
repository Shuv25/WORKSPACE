//User defined exception
class InvalidBalenceFoundException extends Exception
{
    public InvalidBalenceFoundException(String message)
    {
        super(message);
    }
}
public class program6 {
public static void main(String[] args) {
    try
    {
    int balence;
    balence=Integer.parseInt(args[0]);
    updatedBalence(balence);
    }
    catch(InvalidBalenceFoundException e1)
    {
        System.out.println("InvalidBalenceFoundException caught.....");
    }
    catch(NumberFormatException e2)
    {
        System.out.println("NumberFormatException caught.....");
    }
    catch(ArrayIndexOutOfBoundsException e3)
    {
        System.out.println("ArrayIndexOutOfBoundsException caught.....");
    }
    catch(Exception e4)
    {
        System.out.println("Random exception caught......");
    }
    finally
    {
        System.out.println("Finally will always run regardless of exception");
    }
}
public static void updatedBalence(int balence) throws InvalidBalenceFoundException
{
    if(balence<0)
    {
        throw new InvalidBalenceFoundException("Balance is empty so we can't update it");
    }
    System.out.println("No exception in upadatedBalence method");
}    
}
