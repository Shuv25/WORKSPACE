import java.util.*;
public class loop1 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter the value of n :");
int n=sc.nextInt();    
int sumEven=0;
int sumOdd=0;

for(int i=1;i<=n;i++)
{
    if(i%2==0)
    {
        sumEven+=i;
    }else
    {
        sumOdd+=i;
    }
}
System.out.println(sumEven+" ,"+sumOdd);
}    
}
