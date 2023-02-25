import java.util.*;
public class pat4 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enetr the value of n:");
int n=sc.nextInt();
int k=1;
for(int i=1;i<n;i++)
{
    for(int j=1;j<=i;j++)
    {
        System.out.print(k++);
    }
    System.out.println();
}    
}    
}
