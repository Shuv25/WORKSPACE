import java.util.*;
public class reverse {
public static void rev(int array[],int n) 
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            k=array[i];
            array[i]=array[j];
            array[j]=k;
        }
    }
    for(int i=0;i<n;i++)
    {
        System.out.println(array[i]);
    }        
}
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
System.out.print("The reverse of this array is:");
rev(array,n);    
}    
}
