interface simpleInterest
{
    float sr=7;
}
interface compundtInterest
{
    float cr=10;
}
class accout implements simpleInterest,compundtInterest
{
    int p;
    int t;
    public void si(int p,float sr,int t)
    {
        System.out.println(p*(sr/100)*t);
    }
    public void ci(int p,float cr,int t)
    {
        System.out.println(p*(1+(cr/100))*(1+(cr/100)));
    }
}
public class interfaceJava {
public static void main(String[] args) {
    accout a1=new accout();
    a1.p=40000;
    a1.t=2;
    System.out.print("Your SI will be:");
    a1.si(a1.p, a1.sr, a1.t);
    System.out.println(" on "+a1.p+" in "+a1.t+" years");
    System.out.print("Your CI will be:");
    a1.si(a1.p, a1.cr, a1.t);
    System.out.println(" on "+a1.p+" in "+a1.t+" years");
}    
}
