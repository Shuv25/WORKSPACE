import java.util.*;
public class armstrong {
public static void main(String[] args) {
Scanner sc= new Scanner(System.in);
System.out.println("Enter the digit one:");
int a=sc.nextInt();
System.out.println("Enter the digit two:");
int b=sc.nextInt();
System.out.println("Enter the digit three:");
int c=sc.nextInt();

for(int i=1;i<=500;i++)
{
    int temp=i;
    a=temp%10;

    temp=temp/10;
    b=temp%10;

    temp=temp/10;
    c=temp%10;

    if((a*a*a)+(b*b*b)+(c*c*c)==i)
    {
        System.out.println(i);
    }
}
}    
}
