public class program67 {
public static void main(String[] args) {
        check(19);
        System.out.println("Program ends here");
}
public static void check(int age) throws ArithmeticException
{
    try{
        if(age<18)
        {
        throw new ArithmeticException();
        }
        else
        {
            System.out.println("You are eleigible");
        }
        }
        catch(ArithmeticException e)
        {
            e.printStackTrace();
        }
}    
}
