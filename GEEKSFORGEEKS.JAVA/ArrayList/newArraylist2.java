import java.util.ArrayList;
public class newArraylist2 {
public static void main(String[] args) {
ArrayList<Integer>a=new ArrayList<Integer>();
a.ensureCapacity(100);//we use ensureCapacity function when we dont know thw size of the array
for(int i=1;i<=150;i++)
{
    a.add(i);
}
System.out.print(a+" ");    
}    
}
