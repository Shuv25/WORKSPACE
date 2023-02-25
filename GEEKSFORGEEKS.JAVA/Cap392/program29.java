class info
{
    String name;
    int id;
    float salary;
}
class a extends info
{
    public void show(String name,int id,float salary)
    {
        System.out.println(name+" "+id+" "+salary);
    }
}
class b extends a
{
    float bonus;
    public void show(String name,int id,float salary,float bonus)
    {
        System.out.println(name+" "+id+" "+salary+bonus);
    }
}
public class program29 {
public static void main(String[] args) {
    a em1=new a();
    em1.name="Shiv";
    em1.id=25;
    em1.salary=10000000;
    em1.show(em1.name, em1.id, em1.salary);
    System.out.println("--------After bonus-------");
    b em2=new b();
    em2.bonus=5000000;
    em2.show(em1.name, em1.id, em1.salary,em2.bonus);
}    
}
