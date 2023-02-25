//Default constractor
class constractor
{
    String name;
    int id;

    public void info(String name,int id)
    {
        System.out.println(name+" "+id);
    }

    constractor()
    {
        System.out.println("Default constractor is called");
    }
}
public class program24 {
public static void main(String[] args) {
    constractor con1=new constractor();
    con1.name="Shiv";
    con1.id=25;

    con1.info(con1.name, con1.id);
}    
}
