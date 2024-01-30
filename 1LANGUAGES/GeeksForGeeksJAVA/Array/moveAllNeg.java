//Move all the negative elements to one side of the array
import java.util.*;
public class moveAllNeg {
public static void main(String[] args) {
Scanner sc=new Scanner (System.in);
System.out.print("Enter the size of the array:");    
int n=sc.nextInt();
int array[]=new int[n];
System.out.println("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    array[i]=sc.nextInt();
}
move(array,n);
print(array, n);
}
public static void move(int array[],int n) 
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]<0)
            {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;   
            }
        }
    }
}
public static void print(int array[],int n) 
{
    for(int i=0;i<n;i++)
    {
        System.out.print(array[i]+" ");
    }    
}    
}
