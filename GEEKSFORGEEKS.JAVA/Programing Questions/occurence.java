import java.util.*;
public class occurence {
public static int occur(int array[],int n,int a) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]==a)
        {
            count++;
        }
    }
    return count;    
}
    public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("Enter the size of array:");
int n=sc.nextInt();
int array[]=new int[n];
System.out.println("Eter the elements of the array:");
for(int i=0;i<n;i++)
{
    array[i]=sc.nextInt();
}
System.out.println("Enter the element u want to see the occurence:");
int a=sc.nextInt();
System.out.println("The occurence of "+a+" is:"+occur(array,n,a)+" times");
}    
}
