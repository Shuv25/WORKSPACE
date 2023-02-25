//Buffred reader using string
import java.io.*;
public class program9 {
public static void main(String[] args) throws IOException
{
    BufferedReader b1=new BufferedReader(new FileReader("C:\\Users\\hp\\file5.txt"));
    String s1;
    while((s1=b1.readLine())!=null)
    {
        System.out.print(s1);
    }
    System.out.println();
    b1.close();
}    
}
