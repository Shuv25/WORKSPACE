import java.io.*;
public class program76 {
public static void main(String[] args) throws IOException
{
    RandomAccessFile f1=new RandomAccessFile("C:\\Users\\hp\\file1.txt", "rw");
    f1.writeChar('S');
    f1.writeInt(25);
    f1.writeDouble(125.25);
    f1.seek(0);
    System.out.println(f1.readChar());
    System.out.println(f1.readInt());
    System.out.println(f1.readDouble());
    f1.close();
}    
}
