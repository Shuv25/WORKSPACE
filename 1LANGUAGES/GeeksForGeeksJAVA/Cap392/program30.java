class a{
    int a;
    int b;
    public void show(int a,int b)
    {
        System.out.println(a+" "+b);
    }
}
class b extends a
{
    public void show(int a,int b)
    {
        System.out.println(a+b);
    }
}
class c extends b
{
    public void show(int a,int b)
    {
        System.out.println(a-b);
    }
} 
public class program30 {
public static void main(String[] args) {
b b1=new b();
b1.a=100;
b1.b=200;
b1.show(b1.a, b1.b);
a a1=new a();
a1.show(b1.a,b1.b);
c c1=new c();
c1.show(b1.a, b1.b);    
}    
}
