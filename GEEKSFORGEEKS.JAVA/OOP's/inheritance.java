class shape
{
    int l;
    int h;
    int r;
    public void area() 
    {
        System.out.println("Display area:");    
    }
}
class triangle extends shape
{
    public void info(int l,int h) 
    {
        System.out.println(0.5*l*h);
    }
}
class equilateralTriangle extends triangle
{
    public void info(int l,int h) 
    {
        System.out.println(0.5*l*h);
    }
}
class circle extends shape
{
    public void info(int r) 
    {
        System.out.println(22/7*r*r);
    }
}
public class inheritance {
public static void main(String[] args) {
    triangle t1=new triangle();
    t1.l=5;
    t1.h=3;

    equilateralTriangle et1=new equilateralTriangle();
    et1.l=6;
    et1.h=6;

    circle c1=new circle();
    c1.r=7;

    t1.info(t1.l, t1.h);
    et1.info(et1.l, et1.h);
    c1.info(c1.r);
}    
}
