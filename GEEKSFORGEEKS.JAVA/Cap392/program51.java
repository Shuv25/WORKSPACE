/*a program that implements a static nested class and memeber inner class within a single closing class having two private fields no and str where static nested class provides the functionality of reversinga no and member inner class reverse the given string */
class outer
{
    int no=123;
    String str="Java";
    static class inner
    {
        public void innerDisplay(int no)
        {
            int rev = 0;  
            while(no != 0)   
            {  
                int remainder = no % 10;  
                rev = rev * 10 + remainder;  
                no = no/10;  
            }
            System.out.println(rev);
        }
    }
    class inner2
    {
        public void inner2Display(String str)
        {
            char ch[]=str.toCharArray();
            String rev="";  
            for(int i=ch.length-1;i>=0;i--)
            {  
              rev+=ch[i];  
            }
            System.out.println(rev); 
        }
    }
    void callingStaticInnerMethod()
    {
        inner i1=new inner();
        i1.innerDisplay(no);
    }
    void callingMemberInnerMethod()
    {
        inner2 i1=new inner2();
        i1.inner2Display(str);
    }
}
public class program51 {
public static void main(String[] args) {
    outer o1=new outer();
    o1.callingStaticInnerMethod();
    o1.callingMemberInnerMethod();    
}    
}
