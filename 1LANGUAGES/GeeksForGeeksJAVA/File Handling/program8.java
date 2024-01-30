//Buffered Reader
import java.io.*;
public class program8 {
public static void main(String[] args) throws IOException
{
    BufferedReader b1=new BufferedReader(new FileReader("C:\\Users\\hp\\file4.txt"));
    int i;
    while((i=b1.read())!=-1)
    {
        System.out.print((char)i);
    }
    System.out.println();
    b1.close();
}    
}
