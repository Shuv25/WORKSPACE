class cars
{
    private String name;
    private long price;
    private int speed;

    public cars(String name,long price,int speed)
    {
        this.name=name;
        this.price=price;
        this.speed=speed;
    }
    public String getname()
    {
        return name;
    }
    public void setname(String name)
    {
        this.name=name;
    }
    public long getprice()
    {
        return price;
    }
    public void setprice(long price)
    {
        this.price=price;
    }
    public int getspeed()
    {
        return speed;
    }
    public void setspeed(int speed)
    {
        this.speed=speed;
    }
}
public class encapsulationWithConstractor {
public static void main(String[] args) {
    cars c1=new cars("Marcedes", 50000000, 350);
    System.out.println("Name:"+c1.getname()+","+"Price:"+c1.getprice()+"Rs"+","+"Speed:"+c1.getspeed()+"Km/h");
    System.out.println("------------------Stats after upgrading-------------------");
    c1.setprice(60000000);
    c1.setspeed(400);
    System.out.println("Name:"+c1.getname()+","+"Price:"+c1.getprice()+"Rs"+","+"Speed:"+c1.getspeed()+"Km/h");
}    
}
