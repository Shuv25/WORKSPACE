import p1.bank;
class info
{
    String name;
    String orgName;
    String jobRole;
    info(String name,String orgName,String jobRole)
    {
        this.name=name;
        this.orgName=orgName;
        this.jobRole=jobRole;
    } 
}
public class nor {
public static void main(String[] args) {
    info i1=new info("Sourav", "Google", "SrSdev");
    System.out.println(i1.name+" "+i1.jobRole+" "+i1.orgName);
    p1.bank b1=new p1.bank();
    b1.id=25;
    b1.salary=1000000000;
    System.out.println(b1.id+" "+b1.salary);
}    
}
