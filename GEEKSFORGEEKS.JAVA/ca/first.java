/*Write a java program to read n value but compute only the average of all positve values */
import java.util.*;
public class first {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
float ave=0;
float sum=0;
System.out.println("How many no u want to print:");
int num=sc.nextInt();
System.out.print("Enter the value of n you want to put:");
for(int i=1;i<=num;i++)
{
    float n=sc.nextFloat();

    if(n>0)
    {
        sum+=n;
        ave=sum/n;
    }
}
System.out.println("The average of all positive values is :"+ave);   
}    
}
