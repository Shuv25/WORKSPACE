import java.util.*;
class outer 
{
    class inner
    {
        int sumEven=0;
        public void addEven(int n,int a[])
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    sumEven=sumEven+a[i];
                }
            }
            System.out.println("The sum of even no is:"+sumEven);
        }
    }
    void callingInner(int n,int a[])
    {
        inner i1=new inner();
        i1.addEven(n,a);
    }
    void callingOuter(int n,int a[])
    {
        int sumOdd=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]%2!=0)
                {
                    sumOdd=sumOdd+a[i];
                }
            }
            System.out.println("The sum of odd no is:"+sumOdd);
    }
}
public class program52{
public static void main(String[] args) {
Scanner sc=new Scanner (System.in);
System.out.println("Enter the size of the array:");
int n=sc.nextInt();
int a[]=new int[n];
System.out.println("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    a[i]=sc.nextInt();
}
outer o1=new outer();
o1.callingInner(n,a);
o1.callingOuter(n,a);
}    
}