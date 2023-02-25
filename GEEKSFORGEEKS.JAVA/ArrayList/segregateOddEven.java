import java.util.*;
public class segregateOddEven {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("Enter the size of the array:");
int n=sc.nextInt();
int a[]=new int [n];
System.out.print("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    a[i]=sc.nextInt();
}
segregate(a,n);    
for(int i=0;i<n;i++)
    {
        System.out.print(a[i]+" ");
    }
    System.out.println();
}
public static void segregate(int a[],int n) 
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(a[left]%2==0 && left<right)
        {
            left++;
        }
        while(a[right]%2==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            left++;right--;
        }
    }    
}    
}
