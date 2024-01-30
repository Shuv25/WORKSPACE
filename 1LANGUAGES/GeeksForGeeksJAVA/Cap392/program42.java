class Bank
{
    int principle;
    int rate;
    int time;
    int n;
    public void simpleInterest(int principle,int rate,int time)
    {
        System.out.println(principle*rate*time);
    }
    public void compoundInterest(int principle,int rate,int time,int n)
    {
        System.out.println(principle*(1+rate/n)^(n*time));
    }
}
class sbi extends Bank{
    public void simpleInterest(int principle,int rate,int time)
    {
        System.out.println(principle*rate*time);
    }
    public void compoundInterest(int principle,int rate,int time,int n)
    {
        System.out.println(principle*(1+rate/n)^(n*time));
    }
}
class pnb extends Bank
{
    public void simpleInterest(int principle,int rate,int time)
    {
        System.out.println(principle*rate*time);
    }
    public void compoundInterest(int principle,int rate,int time,int n)
    {
        System.out.println(principle*(1+rate/n)^(n*time));
    }
}
class kotak extends Bank
{
    public void simpleInterest(int principle,int rate,int time)
    {
        System.out.println(principle*rate*time);
    }
    public void compoundInterest(int principle,int rate,int time,int n)
    {
        System.out.println(principle*(1+rate/n)^(n*time));
    }
}
public class program42 {
public static void main(String[] args) {
    Bank b1=new Bank();
    b1.simpleInterest(40000, 5, 2);
    b1.compoundInterest(40000, 5, 2, 4);
    sbi s1=new sbi();
    s1.simpleInterest(40000, 7, 2);
    s1.compoundInterest(40000, 7, 2, 5);
    pnb p1=new pnb();
    p1.simpleInterest(40000, 10, 2);
    p1.compoundInterest(40000, 10, 2, 6);
    kotak k1=new kotak();
    k1.simpleInterest(40000, 12, 2);
    b1.compoundInterest(40000, 12, 2, 7);
}    
}
