import java.util.Scanner;

public class string2 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter the first string");
String s1=sc.nextLine();
System.out.println("Enter the second string");
String s2=sc.nextLine();
String s3=s1.concat(s2);
String s4="";
for(int i=s3.length()-1;i>=0;i--)
{
    s4+=s3.charAt(i);
}
System.out.println(s4);
}    
}
