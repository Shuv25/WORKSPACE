//Reading a file
import java.io.*;
public class program3 {
public static void main(String[] args) throws IOException
{
    FileInputStream f1=new FileInputStream("C:\\Users\\hp\\file1.txt");
    int i;
    do
    {
    i=f1.read();
    if(i!=-1)
    {
        System.out.print((char)i);
    }
    }while(i!=-1);
    System.out.println();
    f1.close();
}    
}
