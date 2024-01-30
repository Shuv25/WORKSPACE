//Buffered Writer
import java.io.*;
public class program4 {
public static void main(String[] args) throws IOException
{
File f1=new File("C:\\Users\\hp\\file2.txt");
f1.createNewFile();
BufferedWriter f2=new BufferedWriter(new FileWriter("C:\\Users\\hp\\file2.txt",true));
f2.write("Hello World");
f2.close();    
}    
}
