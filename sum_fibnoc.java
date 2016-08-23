
package tamil;

import java.util.Scanner;

public class fin {

    public static void main(String[] args) {
   Scanner s=new Scanner(System.in);
       int n=s.nextInt();
       int first=0,next,second=1,sum=0;
        for ( int c = 1 ; c <= n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      sum=sum+next;
   }System.out.println(sum);         
    
    }
}

