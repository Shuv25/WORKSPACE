interface display
{
    void show();
}
class sample implements display
{
    public void show()
    {
        System.out.println("Hello there");
    }
}
public class program35 {
public static void main(String[] args) {
    sample s1=new sample();
    s1.show();
}    
}
