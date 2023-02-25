//writing on a file
import java.io.*;
public class program2 {
public static void main(String[] args) throws IOException 
{
    FileOutputStream f1=new FileOutputStream("C:\\Users\\hp\\file1.txt",true);
    
    String s="Hello! Sourav from this side";
    char ch[]=s.toCharArray();
    for(int i=0;i<s.length();i++)
    {
        f1.write(ch[i]);
    }
    f1.close();
}    
}
