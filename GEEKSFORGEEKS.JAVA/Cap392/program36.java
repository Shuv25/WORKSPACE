interface shape
{
    void draw();
}
class rectangle implements shape{
    public void draw()
    {
        System.out.println("Rectangle is getting drawn");
    }
}
class circle implements shape{
    public void draw()
    {
        System.out.println("circle is getting drawn");
    }
}
public class program36 {
public static void main(String[] args) {
    rectangle r1=new rectangle();
    circle c1=new circle();
    r1.draw();
    c1.draw();
}    
}
