class outer
{
    private class inner
    {
        public void inner_method()
        {
            System.out.println("This is a inner class method");
        }
    }
    void callingInntermethod()
    {
        inner i1=new inner();
        i1.inner_method();
    }
    void callingOuterMethod()
    {
        System.out.println("This is a outer class method");
    }
}
public class nesetedClass {
public static void main(String[] args) {
    outer o1=new outer();
    o1.callingInntermethod();
    o1.callingOuterMethod();
}    
}
