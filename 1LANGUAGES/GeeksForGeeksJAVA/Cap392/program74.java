import java.io.IOException;

import java.io.*;
public class program74 {
public static void main(String[] args) throws IOException 
{
    try
    {
        FileInputStream f3= new FileInputStream("C:\\Users\\hp\\file1.txt");
        int i;
        do
        {
            i=f3.read();
            if(i!=-1)
            {
                System.out.print((char)i);
            }
        }while(i!=-1);
        System.out.println();
        f3.close();
    }
    catch(IOException e)
    {
        System.out.println("IOException caught..");
        e.printStackTrace();
    }
}

}
