import java.util.*;
public class searchAnElement {
    public static int position(int array[],int s) 
    {
        int k=0;
        for(int i=0;i<array.length;i++)
        {
            if(array[i]==s)
            {
                k=k+ i;
            }
        }
        return k;
    }
    public static void main(String[] args) {
try(Scanner sc =new Scanner(System.in))
{
System.out.print("Enter the size of the array:");
int n=sc.nextInt();
int array[]=new int [n];
System.out.print("Enter the elements of the array:");
for(int i=0;i<array.length;i++)
{
    array[i]=sc.nextInt();
}
System.out.print("Enter the element you want to search:");
int s=sc.nextInt();
System.out.println("The element you are searching is in "+position(array,s)+" th index.");
}
}    
}
