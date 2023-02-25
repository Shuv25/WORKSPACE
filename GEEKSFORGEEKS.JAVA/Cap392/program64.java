import java.util.*;
public class program64 {
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
    catch(Exception e)
    {
        e.printStackTrace();
    }
    finally
    {
        System.out.println("Finally will always run regardless of excepton in try catch");
    }    
}    
}
