//Sorted merged array
public class program17 {
public static void main(String[] args) {
int array1[]={4,8,15,23,35};
int array2[]={2,15,20,22,35,46,52,65};
int array3[]=new int[array1.length+array2.length];
int i=0;
int j=0;
int k=0;
while(i<array1.length && j<array2.length)
{
    if(array1[i]<array2[j])
    {
        array3[k++]=array1[i++];
    }else
    {
        array3[k++]=array2[j++];
    }
}
while(i<array1.length)
{
    array3[k++]=array1[i++];
}
while(j<array2.length)
{
    array3[k++]=array2[j++];
}
System.out.print("The sorted merged array is:");
for(int l = 0; l < array3.length;l++) 
{
    System.out.print(array3[l] + " ");
}
System.out.println();
System.out.print("The intersection of two array is:");
intersection(array1, array2);
}
public static void intersection(int array1[],int array2[]) 
{
    int i=0;
    int j=0;
    while(i<array1.length && j<array2.length)
    {
        if(array1[i]<array2[j])
        {
            i++;
        }else if(array2[j]<array1[i])
        {
            j++;
        }else
        {
            System.out.println(array2[j++]+" ");
            i++;
        }
    }    
}    
}
