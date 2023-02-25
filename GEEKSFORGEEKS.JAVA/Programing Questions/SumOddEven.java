import java.util.*;
public class SumOddEven {
public static void main(String[] args) {
try(Scanner sc=new Scanner(System.in))
{
    System.out.print("Enter the value of N:");
    int N=sc.nextInt();
    int Seven=0;
    int Sodd=0;
    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            Seven=Seven+i;
        }else{
            Sodd=Sodd+i;
        }
    }
    System.out.println(Seven);
    System.out.println(Sodd);
}    
}    
}
