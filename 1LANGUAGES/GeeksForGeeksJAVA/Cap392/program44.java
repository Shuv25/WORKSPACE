class outer
{
    static int x=10;
    private static int y=20;
    int z=30;
    static class inner
    {
        public void displayInner()
        {
            System.out.println("x:"+x);
            System.out.println("y:"+y);
        }
    }
    void displayOuter()
    {
        inner i1=new inner();
        i1.displayInner();
    }

}
public class program44 {
public static void main(String[] args) {
    outer o1=new outer();
    o1.displayOuter();
}    
}
