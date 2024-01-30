import java.lang.ProcessHandle.Info;

class student
{
  String name;
  int id;
  double cgpa;
public String Fname;
public String Lname;
public String Mname;

  public void info() 
  {
    System.out.println(this.name);
    System.out.println(this.id);
    System.out.println(this.cgpa);  
  }

public void myName(String fname2) {
}
}
public class oops2
{
public static void main(String[] args)
{
    student student1=new student();
    student1.name="Sourav Sutradhar";
    student1.id=12020293;
    student1.cgpa=7.5;

    student student2=new student();
    student2.name="Shuv";
    student2.id=12020293;
    student2.cgpa=8.3;
    
    System.out.println("The info of 1st student:");
    student1.info();
    System.out.println("The info of 2nd student:");
    student2.info();

}
}