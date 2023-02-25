abstract class Bike
{
    Bike()
    {
        System.out.println("Bike object created");
    }
    abstract void sum();
    public void gearchange()
    {
        System.out.println("Gear Changed");
    }
}
class myclass extends Bike{
    void sum()
    {
        System.out.println("Bike is running");
    }
}
public class program32 {
public static void main(String[] args) {
    Bike b=new myclass();
    b.sum();
    b.gearchange();
}    
}
