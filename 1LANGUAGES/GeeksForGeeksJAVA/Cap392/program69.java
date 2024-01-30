class VotingException extends Exception
{
    public VotingException(String s)
    {
        super(s);
    }
}
public class program69 {
public static void main(String[] args) {
    check(18);
    System.out.println("program ends here");
}
public static void check(int age) 
{
    try{
        if(age<18)
    {
        throw new VotingException("You are not eligible to vote");
    }
    else
    {
        System.out.println("You are eligibel to vote");
    }
    }
    catch(VotingException e)
    {
        e.printStackTrace();
    }
}    
}
