import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;
public class program60 {
public static void main(String[] args) {
    try
    {
        Scanner sc=new Scanner(new File("C:\\Users\\hp\\hi.txt"));
        System.out.println("Exit try block");
    }
    catch(FileNotFoundException e)
    {
        System.out.println("File is not found exception occurs");
        e.printStackTrace();
    }
    finally
    {
        System.out.println("Finally will always run regardless of exception in try and catch");
    }
}    
}
