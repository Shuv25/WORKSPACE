// write a java program that reads ur first ,middle and last separetly and concatenate them in same order and deletes the middle name if and only if it's equal to kumar or singh
import java.util.*;
public class program22 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter your first name :");
String str1=sc.nextLine();
System.out.println("Enter your middle name :");
String str2=sc.nextLine();
System.out.println("Enter your last name :");
String str3=sc.nextLine();
String str4=str1.concat(" "+str2);
String str5=str4.concat(" "+str3);
String strArray[]=str5.split(" ");
for(int i=0;i<strArray.length;i++)
{
    if(strArray[i].equals("Kumar") || strArray[i].equals("Singh"))
    {
        continue;
    }
    System.out.print(strArray[i]+" ");
}
}    
}
