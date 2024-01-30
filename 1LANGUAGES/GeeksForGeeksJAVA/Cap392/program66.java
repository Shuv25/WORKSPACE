import java.io.FileNotFoundException;
import java.util.*;
import java.io.File;
public class program66 {
public static void main(String[] args) {
    try{
        display();
    }
    catch(FileNotFoundException e)
    {
        System.out.println("File not found exception found");
        e.printStackTrace();
    }
    finally
    {
        System.out.println("Finally will always run");
    }
}
public static void display() throws FileNotFoundException
{
    Scanner sc=new Scanner(new File("C:\\Users\\hp\\"));
    throw new FileNotFoundException();
}    
}
