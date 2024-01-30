public class program65
{
public static void main(String[] args) 
{
    try
    {
        try
        {
            int a=5/0;
            System.out.println(a);
        }
        finally
        {
            System.out.println("Program ends here");
        }
    }
    catch(Exception e)
    {
        e.printStackTrace();
    }

}
}