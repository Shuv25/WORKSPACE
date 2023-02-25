class info
{
    private String name;
    private int id;
    private float salary;

    public String getName()
    {
        return name;
    }
    public void setName(String name)
    {
        this.name=name;
    }
    public int getid()
    {
        return id;
    }
    public void setid(int id)
    {
        this.id=id;
    }
    public float getsalary()
    {
        return salary;
    }
    public void setsalary(float salary)
    {
        this.salary=salary;
    }
    
}

public class encapsulation {
public static void main(String[] args) {
    info e1=new info();
    e1.setName("Sourav");
    e1.setid(25);
    e1.setsalary(10000000);
    System.out.println("Name:"+e1.getName()+","+"Id:"+e1.getid()+","+"Salary:"+e1.getsalary());
}    
}
