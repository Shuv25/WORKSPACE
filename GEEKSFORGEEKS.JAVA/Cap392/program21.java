//write a java program that reads a line of text and computes the length of each word and stores it in integer array
import java.util.*;
public class program21 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.println("Enter any string:");
String str=sc.nextLine();
String strArray[]=str.split(" ");
int store[]=new int[strArray.length];
for(int i=0;i<strArray.length;i++)
{
    for(int j=0;j<store.length;j++)
    {
        store[j]=strArray[j].length();
        
    }
}
for(int i=0;i<store.length;i++)
{
    System.out.print(store[i]+" ");
}
}    
}
