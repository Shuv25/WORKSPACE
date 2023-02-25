import java.util.*;
public class fir {
public static void main(String[] args) {
try(Scanner sc=new Scanner(System.in))
{
    System.out.println("Enter the value of n:");
    int n=sc.nextInt();
    if(n>0)
    {
        System.out.println("+VE");
    }else if(n<0)
    {
        System.out.println("-VE");
    }else
    {
        System.out.println("it's Zero");
    }
}    
}    
}
