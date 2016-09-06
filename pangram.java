
package tamil;

import java.util.Scanner;
public class Tamil {
    public static void main(String[] args) {
       Scanner s=new Scanner(System.in);
       String a=s.nextLine();
       char c='a',d='A';
       int f=0;
       for(int i=1;i<27;i++)
       {
           int count=0;
           for(int j=0;j<a.length();j++)
           {
               if(c==a.charAt(j) || d==a.charAt(j) )
               count++;
           }
           if(count==0)
           {
               f=5;
           }
           c++;d++;
            
       }
       if(f==5)
           System.out.println("Not a pangram");
       else
           System.out.println("Pangram");
    }
    
}
