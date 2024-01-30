abstract class supclass
{
    String name;
    int id;
}
class a extends supclass
{
    public a(String name,int id)
    {
        this.name=name;
        this.id=id;
    }
    public void info(String name,int id)
    {
        System.out.println(name+" "+id);
    } 
}
public class abstractclass {
public static void main(String[] args) {
a e1=new a("Shuv", 25);
e1.info(e1.name,e1.id);
}    
}
