import java.util.*;
public class loop2 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter the numbers that you want to print multiple:");
int a=sc.nextInt();
int b=sc.nextInt();
int c=sc.nextInt();
for(int i=1;i<=10;i++)
{
    System.out.println("The table of "+a+" is"+a+"X"+i+" ="+a*i);
    System.out.println();
}
for(int i=1;i<=10;i++)
{
    System.out.println("The table of "+b+" is"+b+"X"+i+" ="+b*i);
    System.out.println();
}
for(int i=1;i<=10;i++)
{
    System.out.println("The table of "+c+" is"+c+"X"+i+" ="+c*i);
    System.out.println();
}    
}    
}
