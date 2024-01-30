/*write a java program that creates a integrer array of size n and implements the concept of nested classes where the outer class find the sum of all even inner values of the array wghere as nested class find the sum of all odd values of the array */
import java.util.*;
class outer
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    public class inner
    {
        public void sumEven()
        {
            int sum1=0;
            for(int i=0;i<arr.length;i++)
            {
                if(arr[i]%2==0)
                {
                    sum1=sum1+arr[i];
                }
            }
            System.out.println(sum1);
        }
    }
    void callingInntermethod()
    {
        inner i1=new inner();
        i1.sumEven();
    }
    void callingOuterMethod()
    {
        int sum2=0;
            for(int j=0;j<arr.length;j++)
            {
                if(arr[j]%2!=0)
                {
                    sum2=sum2+arr[j];
                }
            }
            System.out.println(sum2);
    }
}
public class program47 {
public static void main(String[] args) {
    outer o1=new outer();
    o1.callingInntermethod();
    o1.callingOuterMethod();
}    
}
