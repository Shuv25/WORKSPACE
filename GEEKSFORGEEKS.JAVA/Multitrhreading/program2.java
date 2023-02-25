class test extends Thread
{
    public void run()
    {
        for(int i=0;i<6;i++)
        {
            System.out.println("Inside test thread");
        }
    }
}
public class program2 {
public static void main(String[] args) {
    test t1=new test();
    t1.start();
    for(int i=0;i<6;i++)
    {
        System.out.println("Inside main thread");
    }
}    
}
