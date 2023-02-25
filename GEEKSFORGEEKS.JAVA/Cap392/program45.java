class outer{
    static int x=6;
    static class inner
    {
        public void displayinner()
        {
            int prod=1;
            for(int i=x;i>0;i--)
            {
                prod=prod*i;
            }
            System.out.println(prod);
        }
    }
}
public class program45 {
public static void main(String[] args) {
    outer.inner o1=new outer.inner();
    o1.displayinner();
}    
}
