//Perametarized constractor
class constractor
{
    String name;
    int id;

    constractor(String name,int id)
    {
        this.name=name;
        this.id=id;
    }
}
public class program25 {
public static void main(String[] args) {
    constractor con1=new constractor("Sourav", 25);

    System.out.println(con1.name+" "+con1.id);
}    
}
