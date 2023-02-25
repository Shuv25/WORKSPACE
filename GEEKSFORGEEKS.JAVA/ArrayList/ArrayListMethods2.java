import java.util.ArrayList;
public class ArrayListMethods2 {
public static void main(String[] args) {
ArrayList<Integer>al=new ArrayList<Integer>();
al.add(10);
al.add(20);
al.add(30);
al.add(40);
al.add(50);
System.out.println(al.get(2));
al.set(1,40);
System.out.println(al.get(1));
System.out.println(al.indexOf(50));
System.out.println(al.lastIndexOf(40));
System.out.println(al.isEmpty());
al.clear();
System.out.println(al.isEmpty());
}    
}
