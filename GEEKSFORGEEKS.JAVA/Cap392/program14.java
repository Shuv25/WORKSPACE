public class program14 {
public static void reverse(int array[])
{
  int k=0;
  for(int i=0;i<array.length;i++)
  {
    for(int j=i+1;j<array.length;j++)
    {
            k=array[i];
            array[i]=array[j];
            array[j]=k;
    } 
  }
  for(int i=0;i<array.length;i++)
    {
        System.out.println(array[i]);        
    }  
}
public static void main(String[] args) {
int array[]={73,45,16,58,33,28,91,52};
reverse(array);    
}    
}
