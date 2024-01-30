/*Write a Java method to find the smallest number among three numbers. */
import java.util.*;
public class program10 {

public static int smallest(int a,int b,int c)
{
    if(a>b && c>b)
    {
        return b;
    }
    else if(b>a && c>a)
    {
        return a;
    }else
    {
        return c;
    }
}
    public static void main(String[] args) {
Scanner sc=new Scanner (System.in);
System.out.println("Enter the 3 numbers:");
int a=sc.nextInt();
int b=sc.nextInt();
int c=sc.nextInt();
System.out.println("The smallest numbers among these 3 no is:"+smallest(a,b,c));    
}    
}
