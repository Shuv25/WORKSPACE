//Global inner class
class outer{
    void add(int x)
    {
        int y=50;
        class global//global inner class it's always present inside of method
        {
            int z=100;
            int sum()
            {
                return (x+y+z);
            }
        }
        global g1=new global();
        System.out.println(g1.sum());
    }
}
public class program48 {
public static void main(String[] args) {
   outer o1=new outer();
    o1.add(10);
}
}
