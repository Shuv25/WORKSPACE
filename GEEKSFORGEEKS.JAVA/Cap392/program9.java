/*Write a program to find the sum of squares of first n odd values using objects and classes */
import java.util.*;
public class program9 {
public static void main(String[] args) {
Scanner sc=new Scanner (System.in);
System.out.println("How many odd no u want to print:");
int n=sc.nextInt();
int sum=0;
int j;
for(int i=1;i<=n*2;i++)
{
    if(i%2!=0)
    {
       j=i*i;
       sum+=j;
    }
}
System.out.println("The square of sum of first "+n+" odd numbers is:"+sum);    
}
}
