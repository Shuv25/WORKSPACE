import java.io.FileWriter;
import java.io.IOException;
import java.io.*;
public class program73 {
public static void main(String[] args) throws IOException 
{
    try
    {
        FileWriter f2=new FileWriter("C:\\Users\\hp\\file1.txt");
        f2.write("LPU>>>>>");
        f2.close();
        System.out.println("Comtents written to file");
    }
    catch(IOException e)
    {
        System.out.println("IOException caught....");
        e.printStackTrace();
    }
}    
}
