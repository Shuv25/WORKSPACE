import java.util.*;
public class factorial {
public static void main(String[] args) {
try(Scanner sc =new Scanner (System.in))
{
    System.out.println("Enter the value of n:");
    int n=sc.nextInt();
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    System.out.println(fac);
}    
}    
}
