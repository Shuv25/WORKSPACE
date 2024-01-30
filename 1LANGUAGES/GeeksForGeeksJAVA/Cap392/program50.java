/*a program to perform method overridding in annonomous class compute(a) calculate the square of a in base class then calculate the cube of a in innonomus inner class */
import java.util.*;
class outer
{
     public void compute(int a)
    {
        System.out.println(a*a);
    }
}
public class program50 {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the value of a:");
    int a=sc.nextInt();
    outer o1=new outer()
    {
        public void compute(int a)
        {
            System.out.println(a*a*a);
        }
    }; 
    outer o2=new outer();
    o1.compute(a);
    o2.compute(a);
}    
}
