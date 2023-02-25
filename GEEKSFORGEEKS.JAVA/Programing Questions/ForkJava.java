import java.util.*;
public class ForkJava
{
public static void main(String[] args) {
try(Scanner sc =new Scanner(System.in))
{
    System.out.println("Enter the value of N:");
    int N=sc.nextInt();
    if(N%3==0 && N%5==0)
    {
        System.out.println("ForkJava");
    }else if(N%3==0)
    {
        System.out.println("Fork");
    }else if(N%5==0)
    {
        System.out.println("Java");
    }else
    {
        System.out.println();
    }
}
}
}
