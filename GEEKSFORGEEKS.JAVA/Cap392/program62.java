public class program62 {
public static void main(String[] args) {
try
{
    String str="abc";
    int a=Integer.parseInt(str);//Whare Integer is a class and parseInt is a func to covert str to int
    System.out.println(a);
}
catch(NumberFormatException e)
{
    System.out.println("Number format exception found");
    e.printStackTrace();
}
finally
{
    System.out.println("Finally will always run");
}    
}    
}
