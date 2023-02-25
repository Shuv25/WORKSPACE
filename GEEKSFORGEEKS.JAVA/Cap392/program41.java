class a
{
    int A,B;
    public void show(int A,int B)
    {
        System.out.println(A+B);
    }
}
class b extends a
{
    public void show(int A,int B)
    {
        System.out.println(A*B);
    }
}
class c extends b
{
    public void show(int A,int B)
    {
        System.out.println(A/B);
    }
}
public class program41 {
public static void main(String[] args) {
    a a1=new a();
    b b1=new b();
    c c1=new c();
    a1.show(7, 5);
    b1.show(10, 8);
    c1.show(5, 5);   
}    
}
