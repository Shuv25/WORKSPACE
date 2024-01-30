class a
{
    int a;
    int b;
}
class b extends a
{
    public void add(int a,int b)
    {
        System.out.println(a+b);
    }
}
class c extends a
{
    public void sub(int a,int b)
    {
        System.out.println(a-b);
    }
}
public class program31 {
public static void main(String[] args) {
b b1=new b();
b1.a=400;
b1.b=200;
b1.add(b1.a, b1.b);

c c1=new c();
c1.sub(b1.a, b1.b);
}    
}
