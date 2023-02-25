/*Write a program to perform polymerphism myName() is called three times first time its displayes only first name and second time middle name and lats time last name */
import java.util.jar.Attributes.Name;
class student
{
    String Fname;
    String Mname;
    String Lname;
    public  void myName(String Fname) 
    {
        System.out.println(Fname);    
    }
    public  void myName(String Fname,String Mname) 
    {
        System.out.println(Fname+" "+Mname);    
    }
    public  void myName(String Fname,String Mname,String Lname) 
    {
        System.out.println(Fname+" "+Mname+" "+Lname);    
    }
}
public class program23 {
public static void main(String[] args) {
    student student1=new student();
    student1.Fname="Sourav";
    student1.Mname="Roy";
    student1.Lname="Sutradhar";
    
    student1.myName(student1.Fname);
    student1.myName(student1.Fname,student1.Mname);
    student1.myName(student1.Fname,student1.Mname,student1.Lname);
}    
}
