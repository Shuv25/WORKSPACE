import java.util.*;
import java.io.*;
public class program77 {
public static void main(String[] args) throws Exception 
{
    try
    {
        File f1=new File("C:\\Users\\hp\\file1.txt");
        Scanner sc=new Scanner(f1);
        while(sc.hasNextLine())
        {
            String data=sc.nextLine();
            String data2="";
            for(int i=data.length()-1;i>=0;i--)
            {
                data2+=data.charAt(i);
            }
            System.out.println(data2);
        }
    }
    catch(Exception e)
    {
        System.out.println("............");
    }
}    
}
