//Anonynomous class
class sample
{
void display()
{
    System.out.println("We are inside of sample class");
}
}
public class program49 {
public static void main(String[] args) {
    sample s1=new sample()
    {
        void display()
        {
            System.out.println("We are inside of main class");
        }           
    };
    sample s2=new sample();
    s1.display();
    s2.display();
}    
}
