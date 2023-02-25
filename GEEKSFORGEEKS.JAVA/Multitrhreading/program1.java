class test extends Thread
{
    public void run()
    {
        System.out.println("Inside test thread");
    }
}
public class program1 {
public static void main(String[] args) {
    test t1=new test();
    t1.start();
    System.out.println("Inside main thread");
}    
}
