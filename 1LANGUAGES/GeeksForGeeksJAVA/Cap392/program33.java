class a{
public void show()
{
    System.out.println("Hello");
}
}
class b extends a
{
    b()
    {
        System.out.println("b object created");
    }
}
public class program33 {
public static void main(String[] args) {
    b b1=new b();
    b1.show();
}    
}
