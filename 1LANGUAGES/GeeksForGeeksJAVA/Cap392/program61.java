public class program61 {
public static void main(String[] args) {
    try{
        String str=null;
        System.out.println(str.length());
    }
    catch(NullPointerException e)
    {
        System.out.println("Null pointer exception occurse");
        e.printStackTrace();
    }
    finally
    {
        System.out.println("Finally will always run");
    }
}    
}
