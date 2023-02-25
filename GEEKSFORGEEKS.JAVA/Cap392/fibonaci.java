import java.util.*;
public class fibonaci {
public static void main(String[] args) {
Scanner sc= new Scanner(System.in);
System.out.println("Enter no of  term:");
int n=sc.nextInt();
int firstterm=0;
int secterm=1;
for(int i=0;i<=n;i++)
{
    int thirdterm=firstterm+secterm;
    System.out.println(thirdterm);
    firstterm=secterm;
    secterm=thirdterm;
}    
}    
}
