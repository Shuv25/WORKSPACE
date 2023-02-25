import java.util.jar.Attributes.Name;
//Compile time polymerphism
class student
{
    String name;
    int id;
    public void info(String name) 
    {
        System.out.println(name);
    }
    public void info(int id) 
    {
        System.out.println(id);
    }
    public void info(String name,int id) 
    {
        System.out.println(name+" "+id);
    }
}
public class polymorphism {
public static void main(String[] args) {
    student student1=new student();
    student1.name="Sourav";
    student1.id=120202293;
    
    student1.info(student1.name);
    student1.info(student1.id);
    student1.info(student1.name,student1.id);
}    
}
