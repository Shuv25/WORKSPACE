//Buffer Reader using array 
import java.io.*;
public class program10 {
public static void main(String[] args) throws IOException
{
    BufferedReader b1=new BufferedReader(new FileReader("C:\\Users\\hp\\file4.txt"));
    char ch[]=new char[20];
    b1.read(ch,0,19);
    System.out.print(ch);
    b1.close();
}    
}
