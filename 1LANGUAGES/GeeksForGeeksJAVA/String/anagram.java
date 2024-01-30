import java.util.*;
public class anagram {
public static boolean check(String s1,String s2) 
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    char a1[]=s1.toCharArray();
    Arrays.sort(a1);
    s1=new String(a1);
    char a2[]=s2.toCharArray();
    Arrays.sort(a2);
    s2=new String(a2);
    return s1.equals(s2);
}    
public static void main(String arge[]) {
try(Scanner sc =new Scanner(System.in))
{
    System.out.print("Enter the first String:");
    String s1=sc.nextLine();
    System.out.print("Enter the second String:");
    String s2=sc.nextLine();
    System.out.println(check(s1,s2));
}    
}    
}
