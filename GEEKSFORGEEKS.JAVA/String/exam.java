class m1
{
    int a;
    int b;
    int c;
    public void show(int a, int b)
    {
        System.out.println(a+b);
    }
    public void show(int a, int b,int c)
    {
        System.out.println(a+b+c);
    }
}

abstract class m2
{
    abstract void show2();
}

class m3 extends m2
{
    public void show2()
    {
        System.out.println("Hello");
    }
}
public class exam {
public static void main(String[] args) {
    m1 p=new m1();    
    p.show(10, 5);
    p.show(5, 10, 10);
    m3 q=new m3();
    q.show2();   
}    
}
