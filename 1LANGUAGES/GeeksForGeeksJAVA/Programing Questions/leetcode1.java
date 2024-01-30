/*Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).*/
import java.util.*;
public class leetcode1 {
public static void main(String[] args) {
try(Scanner sc=new Scanner(System.in))
{
    System.out.print("Enter the low non-negative integer:");
    int l=sc.nextInt();
    System.out.print("Enter the high non-negative integer:");
    int h=sc.nextInt();
    int count=0;
    for(;l<=h;l++)
    {
        if(l%2!=0)
        {
            count++;
        }
    }
    System.out.println("There are "+count+" odd numbers between "+l+" to "+h);
}   
}    
}
