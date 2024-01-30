class outer{
    static int x=10;
    private static int y=20;
    int z=30;
    class innner
    {
        public void displayinner()
        {
            System.out.println("x:"+x);
            System.out.println("y:"+y);
            System.out.println("z:"+z);
        }
    }
}
public class program46 {
public static void main(String[] args) {
    outer out=new outer();
    outer.innner obj=out.new innner();
    obj.displayinner();
}    
}
