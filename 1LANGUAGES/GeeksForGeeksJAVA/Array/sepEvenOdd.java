public class sepEvenOdd {
public static void main(String args[])
{
    int array[]={1,2,3,4,5,6,8,7,10,9,24,91};
    for(int i=0;i<array.length;i++)
    {
        if(array[i]%2==0)
        {
            System.out.print(array[i]+" ");
        }
    }
    for(int j=0;j<array.length;j++)
    {
        if(array[j]%2!=0)
        {
            System.out.print(array[j]+" ");
        }
    }
    System.out.println();
}    
}
