class now
{
    float a;
    float b;
    float c;
    int d;
    int e;
    int f;
    String fname;
    String lname;
    public void add(float a,float b,float c)
    {
        System.out.println(a+b+c);
    }
    public void add(int d,int e,int f)
    {
        System.out.println(d+e+f);
    }
    public void add(String fname,String lname)
    {
        System.out.println(fname+" "+lname);
    }
}
public class just {
public static void main(String[] args) {
    now n1=new now();
    n1.a=(float) 54.1;
    n1.b=(float) 55.1;
    n1.c=(float) 56.1;

    n1.d=4;
    n1.e=5;
    n1.f=6;

    n1.fname="Aman";
    n1.lname="Kashi";

    n1.add(n1.a,n1.b,n1.c);
    n1.add(n1.d,n1.e,n1.f);
    n1.add(n1.lname,n1.fname);


}    
}
