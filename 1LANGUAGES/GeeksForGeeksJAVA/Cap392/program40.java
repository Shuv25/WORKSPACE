class tax
{
    int amount;
    public void show(int amount)
    {
        System.out.println(amount+(amount*5/100));
    }
}
class person1 extends tax
{
    public void show(int amount) 
    {
        System.out.println(amount+(amount*7/100));
    }
}
public class program40 {
    public static void main(String[] args) {
        person1 p1=new person1();
        p1.show(100);
    }
}
