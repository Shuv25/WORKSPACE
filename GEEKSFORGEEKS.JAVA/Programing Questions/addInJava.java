import java.util.*;
public class addInJava {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter the size of the array:");
int n=sc.nextInt();
int array[]=new int[n];
System.out.println("Enter the elements of the array:");  
for(int i=0;i<n;i++)
{
    array[i]=sc.nextInt();
}
System.out.println("Enter the sum u want to print:");
int s=sc.nextInt();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(array[i]+array[j]==s)
        {
            System.out.println(array[i]+"+"+array[j]+"="+s);
        }
    }
}  
}    
}
