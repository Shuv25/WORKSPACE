package bank4;
import java.util.*;
public class Example {
public void show() {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a number:");
    int n=sc.nextInt();
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    System.out.println(sum);
}    
}
