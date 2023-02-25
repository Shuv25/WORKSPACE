//checked exception
import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;
public class program1
{
    public static void main(String[] args) {
        try
        {
            Scanner sc=new Scanner(new File(" C:\\Users\\hp\\file1.txt"));
            System.out.println("Exit try block");//this statement will print if the file is present means if we mention the path of the file corectly otherswise not
        }      
        catch(FileNotFoundException e)
        {
            System.out.println("File not found caught........");
            System.out.println("Exit catch block");
        }
        finally
        {
            System.out.println("Finally block runs regardless of exception in try-catch ");
        }
    }
}