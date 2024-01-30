import java.util.*;
public class sumofdigit {
public static void main(String[] args) {
Scanner sc= new Scanner (System.in);
System.out.println("Value of n:");
long n=sc.nextLong();
long i=0;
for(;n!=0;n/=10)
{
    i=i+n%10;
}
System.out.println(i);
}    
}
