abstract class Versity
{
    abstract void showVersity();
}
interface City
{
    void showCity();
}
class sample extends Versity implements City
{
    public void showVersity()
    {
        System.out.println("LPU");
    }
    public void showCity()
    {
        System.out.println("Phagwara");
    }
}
public class program37 {
public static void main(String[] args) {
    sample s1=new sample();
    s1.showVersity();
    s1.showCity();
}    
}
