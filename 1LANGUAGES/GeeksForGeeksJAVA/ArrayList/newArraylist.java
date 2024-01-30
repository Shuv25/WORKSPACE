import java.util.ArrayList;
import java.util.*;
public class newArraylist {
public static void main(String[] args) {
Scanner sc =new Scanner(System.in);
System.out.print("Enter the size of the arraylist:");
int n=sc.nextInt();
ArrayList<Integer>a=new ArrayList<Integer>(n);
for(int i=1;i<=n;i++)
{
    a.add(i);
}
System.out.print(a+" ");    
}   
}
