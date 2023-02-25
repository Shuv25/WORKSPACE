import java.util.ArrayList;
public class ArraylistMethods {
public static void main(String[] args) {
ArrayList<String>al=new ArrayList<String>();
al.add("Hi");
al.add("evryone");
al.add("how are you");
al.add("guys");
al.add(1,"there");
System.out.println(al);
System.out.println(al.contains("there"));
al.remove(1);
System.out.println(al.contains("there"));
al.remove("guys");
System.out.println(al.contains("guys"));
System.out.println(al);
}    
}
