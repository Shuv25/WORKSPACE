import java.util.*;
public class string1 {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a string:");
    StringBuilder txt=new StringBuilder(sc.nextLine());
    System.out.println("Enter a the index of the chr u wnat to print:");
    int n=sc.nextInt();
    System.out.println(txt.charAt(n));
}    
}
