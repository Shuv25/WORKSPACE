interface Bank
{
    void show(int amount,int interest);
}
class SBI implements Bank
{
    public void show(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
class PNB implements Bank{
    public void show(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
class Kotak implements Bank{
    public void show(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
public class program38 {
public static void main(String[] args) {
    SBI s1=new SBI();
    PNB p1=new PNB();
    Kotak k1=new Kotak();
    s1.show(10000, 5);
    p1.show(10000, 7);
    k1.show(10000, 10);

}    
}
