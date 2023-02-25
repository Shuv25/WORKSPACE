
public class common3arr {
public static void main(String[] args) {
int a[]={1,5,10,20,40,80};
int b[]={6, 7, 20, 80,40, 100};
int c[]={3, 4, 15, 20, 30,40, 70, 80, 120};
int co=0;
for(int i=0;i<a.length;i++)
{
    for(int j=0;j<b.length;j++)
    {
            if(a[i]==b[j] )
            {
                co=a[i];
            } 
    }
}
for(int j=0;j<b.length;j++)
{
    for(int k=0;k<c.length;k++)
    {
            if(b[j]==c[k] )
            {
                co=b[j];
                System.out.println(co);
            } 
    }
}
   
}    
}
