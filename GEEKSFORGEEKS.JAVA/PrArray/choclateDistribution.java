import java.util.Arrays;

public class choclateDistribution {
public static void main(String[] args) {
int array[]={3, 4, 1, 9, 56, 7, 9, 12};
int m=5;
int n=array.length;
int min_diff=Integer.MAX_VALUE;
int i=0;
int j=m-1;
Arrays.sort(array);
while(j<n-1)
{
    int temp=array[j]-array[i];
    min_diff=Math.min(temp, min_diff);
    i++;
    j++;
}
System.out.println(min_diff);
}    
}
