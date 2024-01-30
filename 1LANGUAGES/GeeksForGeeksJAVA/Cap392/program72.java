import java.io.*;
public class program72 {
public static void main(String[] args) throws IOException
 {
    File f1=new File("C:\\Users\\hp\\file1.txt");
    if(f1.exists()){
    System.out.println("Can readadble:"+f1.canRead());
    System.out.println("Can writaadble:"+f1.canWrite());
    System.out.println("Path of the file:"+f1.getAbsolutePath());
    System.out.println("Name of the file:"+f1.getName());
    System.out.println("Length of the file:"+f1.length());
    System.out.println("Delete the file:"+f1.delete());
    System.out.println("Does this file exist:"+f1.exists());
    }
}    
}
