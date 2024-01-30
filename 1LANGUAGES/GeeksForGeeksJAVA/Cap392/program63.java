import java.util.*;
public class program63 {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int x=sc.nextInt();
    int y=sc.nextInt();
    int a[]=new int[5];
    try{
        a[5]=x/y;
        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[5]);
        }
    }
    catch(ArithmeticException e)
    {
        System.out.println("Arithmetic exception found");
        e.printStackTrace();
    }
    catch(ArrayIndexOutOfBoundsException e)
    {
        System.out.println("ArrayIndexoutOfBounds exception found");
        e.printStackTrace();
    }
    finally{
        System.out.println("finallu will always run");
    }
}    
}
