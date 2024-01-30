
class Animal
{
    String name;
    String sound;
    int legs;
    public void display() 
    {
        System.out.println("The characteristics are:");    
    }
}
class Dog extends Animal
{
    Dog(String name,String sound,int legs)
    {
        this.name=name;
        this.sound=sound;
        this.legs=legs;
    }
    public void info(String name,String sound,int legs) 
    {
        System.out.println(name+" "+sound+" "+legs);    
    }
    
}
class Cat extends Animal
{
    Cat(String name,String sound,int legs)
    {
        this.name=name;
        this.sound=sound;
        this.legs=legs;
    }
    public void info(String name,String sound,int legs) 
    {
        System.out.println(name+" "+sound+" "+legs);    
    }
    
}
class Cow extends Animal
{
    Cow(String name,String sound,int legs)
    {
        this.name=name;
        this.sound=sound;
        this.legs=legs;
    }
    public void info(String name,String sound,int legs) 
    {
        System.out.println(name+" "+sound+" "+legs);    
    }
}
public class pacakages {
public static void main(String[] args) {

    Dog d1=new Dog("Rockey","Bhow",4);
    Cat c1=new Cat("Billy", "Meow", 4);
    Cow co1=new Cow("Sonai", "Mooo", 4);    

    d1.info(d1.name, d1.sound, d1.legs);
    c1.info(c1.name, c1.sound, c1.legs);
    co1.info(co1.name, co1.sound, co1.legs);
    
}    
}
