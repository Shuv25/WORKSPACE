class Bank
{
    int amount;
    int interest;
    public void getROI(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
class SBI extends Bank{
    public void getROI(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
class PNB extends Bank{
    public void getROI(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
class Kotak extends Bank{
    public void getROI(int amount,int interest)
    {
        System.out.println(amount+interest);
    }
}
public class program34 {
public static void main(String[] args) {
    SBI s1=new SBI();
   PNB p1=new PNB();
   Kotak k1=new Kotak();
    s1.getROI(10000, 5);
    p1.getROI(10000, 7);
    k1.getROI(10000, 10);
}    
}
