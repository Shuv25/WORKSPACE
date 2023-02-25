public class maxSunarray {
 public static void main(String[] args) {
     int array[]={-2,-3,4,-1,-2,1,5,-3};
     int size=array.length;
     int max_so_far=Integer.MIN_VALUE;
     int max_end_here=0;
     for(int i=0;i<size;i++)
     {
         max_end_here=max_end_here+array[i];
         if(max_so_far<max_end_here)
         {
             max_so_far=max_end_here;
         }
         if(max_end_here<0)
         {
             max_end_here=0;
         }
     }
     System.out.println(max_so_far);
 }   
}
