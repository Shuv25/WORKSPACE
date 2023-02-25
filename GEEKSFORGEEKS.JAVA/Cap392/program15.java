public class program15 {

public static int[] small(int array[][])
{
    int min=Integer.MAX_VALUE;
    int sr=0;
    int sc=0;
    for(int i=0;i<array.length;i++)
    {
        for(int j=0;j<array.length;j++)
        {
            if(array[i][j]<min)
            {
                min=array[i][j];
                sr=i;
                sc=j;
            }
        }
    }
    int ans[]=new int[3];
    ans[0]=min;
    ans[1]=sr;
    ans[2]=sc;
    return ans;    
}
public static int[] large(int array[][])
{
    int max=Integer.MIN_VALUE;
    int lr=0;
    int lc=0;
    for(int i=0;i<array.length;i++)
    {
        for(int j=0;j<array.length;j++)
        {
            if(max<array[i][j])
            {
                max=array[i][j];
                lr=i;
                lc=j;           
            }
        }
    }
    int ans2[]=new int[3];
    ans2[0]=max;
    ans2[1]=lr;
    ans2[2]=lc;
    return ans2;
}
public static void main(String[] args) {
int array[][]={{4,5,19,17},{50,66,22,5},{42,51,31,92},{15,61,79,43}};
int ans[]=small(array);
int ans2[]=large(array);
System.out.println("****************************************************************");
System.out.println("The smalest no in this 2D array is "+ans[0]+" at ("+ans[1]+","+ans[2]+") index");
System.out.println();
System.out.println("The largest no in this 2D array is "+ans2[0]+" at ("+ans2[1]+","+ans2[2]+") index");
System.out.println();
System.out.println("****************************************************************");
}    
}
