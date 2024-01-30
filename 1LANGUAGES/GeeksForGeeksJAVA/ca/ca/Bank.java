package ca;
class Human
{
    public String name;
    protected String Sound;
    private int legs;
    // getters and setters for accesing private data 
    //getters
    public int getlegs()
    {
        return this.legs;
    }
    //setters
    public void setlegs(int l)
    {
        this.legs=l;
    }
}
public class Bank {
    public static void main(String[] args) {
        Human h1=new Human();
        h1.name="ABCD";
        h1.Sound="Human language";
        h1.setlegs(4);
        System.out.println(h1.getlegs());    
    }   
        
}
