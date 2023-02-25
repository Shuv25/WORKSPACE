class constractor
{
    int real;
    int img;

    constractor()
    {

    }
    constractor(int tempReal,int tempImg)
    {
        img=tempImg;
        real=tempReal;
    }
   
    constractor addcomp(constractor c1,constractor c2)
    {
        constractor temp=new constractor();
        temp.real=c1.real+c2.real;
        temp.img=c1.img+c2.img;
        return temp;
    }
}
public class program27 {
public static void main(String[] args) {
    constractor c1=new constractor(3, 5);
    constractor c2=new constractor(6, 5);
    constractor c3=new constractor();
    c3=c3.addcomp(c1, c2);

    System.out.println("Sum of complex number:"+c3.real+"+"+c3.img+"i");
}    
}
