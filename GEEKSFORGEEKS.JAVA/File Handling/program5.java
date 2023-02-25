import java.io.*;
public class program5 {
public static void main(String[] args) throws IOException
{
    File f1=new File("C:\\Users\\hp\\file4.txt");
    f1.createNewFile();
    FileOutputStream f2=new FileOutputStream("C:\\Users\\hp\\file4.txt",true);
    String s="Good Morning Lpu";
    char c[]=s.toCharArray();
    for(int i=0;i<s.length();i++)
    {
        f2.write(c[i]);
    }
    f2.close();
}    
}
