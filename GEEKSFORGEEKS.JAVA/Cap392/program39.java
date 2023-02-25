/*a program of multiple inheritance where person is an abstract class eligibility criteria is an interface while employee is a subclass that extennds person class an implements eligibility criteria  */
abstract class person
{
    abstract void details(String name);
}
interface eligibilityCriteria
{
     void eligi(String eligibilty);
}
class employee extends person implements eligibilityCriteria
{
    public void details(String name)
    {
        System.out.println(name);
    }
    public void eligi(String eligibilty )
    {
        System.out.println(eligibilty);
    }
}
public class program39 {
public static void main(String[] args) {
    employee e1=new employee();
    e1.details("Sourav");
    e1.eligi("MCA");
}    
}
