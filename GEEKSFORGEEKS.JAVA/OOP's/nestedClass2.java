class outer{
    void display()
    {
        int num=100;
        class inner{
            public void print()
            {
                System.out.println("The number comes after 99 is:"+num);
            } 
        }
        inner i1=new inner();
        i1.print();
    }
}
public class nestedClass2 {
public static void main(String[] args) {
    outer o1=new outer();
    o1.display();
}    
}
