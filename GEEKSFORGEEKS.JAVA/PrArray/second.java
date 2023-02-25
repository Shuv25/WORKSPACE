/*Write a java program that reads ur full name consisting of (first,middle and last) as a single string then extracts the middle name prints it in revease order. */
import java.util.*;
public class second {
public static void main(String[] args) {
Scanner sc=new Scanner (System.in);
System.out.println("Enter your full name:");
String str=sc.nextLine();
String strArray[]=str.split(" ");
String str2="";
for(int i=0;i<strArray.length;i++)
{
    str2=strArray[1];
}
String str3="";
for(int i=str2.length()-1;i>=0;i--)
{
    str3+=str2.charAt(i);
}
System.out.println("The Middle name in reverse order is:"+str3);
    
}    
}
