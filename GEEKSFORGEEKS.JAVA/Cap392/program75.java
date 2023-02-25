import java.io.*;
public class program75 {
public static void main(String[] args) throws IOException 
{
    try
    {
        FileInputStream f1= new FileInputStream("C:\\Users\\hp\\file1.txt");
        FileOutputStream  f2=new FileOutputStream("C:\\Users\\hp\\file2.txt");
        int ch;
        while((ch=f1.read())!=-1)
        {
            f2.write(ch);
        }
        System.out.println("File Copied");
        if(f1!=null)
        {
            f1.close();
        }
        if(f2!=null)
        {
            f2.close();
        }
    }
    catch(IOException e)
    {
        System.out.println("IOEXception caught....");
        e.printStackTrace();
    }
}    
}
