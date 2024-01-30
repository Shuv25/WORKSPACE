import java.util.*;
public class MultplicationTable {
public static void main(String[] args) {
try(Scanner sc=new Scanner(System.in))
{
    System.out.println("Enter 3 nums to print their multiplication table:");
    int a=sc.nextInt();
    int b=sc.nextInt();
    int c=sc.nextInt();
    int ma=1;
    int mb=1;
    int mc=1;
    System.out.println("Multiplication table of 24:");
    for(int i=1;i<=10;i++)
    {
        ma=a*i;
        System.out.println(ma);
    }
    System.out.println("Multiplication table of 29:");
    for(int i=1;i<=10;i++)
    {
        mb=b*i;
        System.out.println(mb);
    }
    System.out.println("Multiplication table of 50:");
    for(int i=1;i<=10;i++)
    {
        mc=c*i;
        System.out.println(mc);
    }
}    
}    
}
