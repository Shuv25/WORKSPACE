import java.util.*;
public class nsum {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enetr the value of n:");
        int n=sc.nextInt();
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            System.out.print(i+" ");
            sum+=i;
        }
        System.out.println();
        System.out.println(sum);    
        }        
}
