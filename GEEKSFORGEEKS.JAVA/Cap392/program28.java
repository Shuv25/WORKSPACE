//single inheritance
class employee
{
    float sal=10000;
    void show()
    {
        System.out.println(sal);
    }
}
public class program28 extends employee {
    public static void main(String[] args) {
        int bonus=5000;
        program28 p=new program28();
        p.show();
        System.out.println(bonus);
}    
}
