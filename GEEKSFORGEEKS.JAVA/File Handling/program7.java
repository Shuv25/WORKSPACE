import java.io.*;
public class program7 {
public static void main(String[] args) throws IOException
{
    BufferedWriter b1=new BufferedWriter(new FileWriter("C:\\Users\\hp\\file4.txt",true));
    b1.write(" How are you guys");
    b1.close();
}    
}
