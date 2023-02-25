class pen
{
    String color;
    String type;
    public void write(){
        System.out.println("Properties of pen is:");
    } 
    public void printColor()
    {
        System.out.println(this.color);
    }
    public void printType()
    {
        System.out.println(this.type);
    }
}
public class oops1
{
public static void main(String[] args) 
{
    pen pen1=new pen();
    pen1.color="Violet";
    pen1.type="Gel";
    
    pen pen2=new pen();
    pen2.color="Black";
    pen2.type="Ball Pen";
    
    pen1.write();
    pen1.printColor();
    pen1.printType();

    pen2.printColor();
    pen2.printType();
}
}