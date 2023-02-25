/*write a program that reads a string from the user and valid this program palindrom or not */
import java.util.*;
public class program20 {
public static void main(String[] args) {
Scanner sc =new Scanner(System.in);
System.out.println("Enter a string to check if it's a palindrom or not:");
String s1=sc.nextLine();
String s2="";
for(int i=s1.length()-1;i>=0;i--)
{
    s2+=s1.charAt(i);
}  
if(s1.equals(s2))
{
    System.out.println("It's a Palindrom ");
}else
{
    System.out.println("It's not a Palindrom ");
}
}    
}
