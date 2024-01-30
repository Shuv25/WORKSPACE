import java.util.*;
public class reverse {
public static void main(String[] args) {
Scanner sc= new Scanner(System.in); 
int reversed=0;
System.out.println("Enter the value of n:");
int n=sc.nextInt();
for(;n!=0;n/=10)
{
    int digit=n%10;
    reversed=reversed*10+digit;
}
System.out.println(reversed);    
}    
}
