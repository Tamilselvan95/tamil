package Tamil;

import java.util.Scanner;


public class DogKicker {

    public static void main(String[] args) 
    {
        int init=0,current=1,next=0,n,z = 0;
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(int i=1;next<=n;i++)
        {
            if(i==1)
                next=1;
            else
            {
        next=current+current;
        current=next;}
if(next==n){
            z=55;
        }
    }
        
 if(z==55) 
 {
     System.out.println("True");
     
 }else
     System.out.println("False");
}
}
