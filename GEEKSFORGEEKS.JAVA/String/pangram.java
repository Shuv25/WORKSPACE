import java.util.*;
public class pangram {
public static boolean check(String s)
{
   int n=s.length();
   if(n<26)
   {
       return false;
   }
   boolean visited[]=new boolean[26];
   for(int i=0;i<n;i++)
   {
       char x=s.charAt(i);
       if(x>='a' && x<='z')
       {
            visited[x-'a']=true;
       }
       if(x>='A' && x<='Z')
       {
           visited[x-'A']=true;
       }
   }
   for(int i=0;i<26;i++)
   {
       if(visited[i]==false)
       {
           return false;
       }
   }
   return true;
}    
    public static void main(String args[]) {
    try(Scanner sc =new Scanner(System.in))
    {
        System.out.print("Enter a Sentence:");
        String s=sc.nextLine();
        System.out.println(check( s));
    }   
    }
}
