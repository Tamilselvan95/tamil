import java.util.ArrayList;  
import java.util.Collections;  
import java.util.List;  
import java.util.Scanner;  
public class lex {  
public static void main(String a[]) {  
Scanner ta=new Scanner(System.in);  
System.out.println("String:");  
String str=ta.nextLine();  
System.out.println("length");  
int count=ta.nextInt();
List<String> list=new ArrayList<String>();  
for (int a=0;a<str.length();a = a + 1) 
{  
if (str.length()-a>=count) 
{  
list.add(str.substring(a,count + a));  
}  
}  
Collections.sort(list);  
System.out.println("Largest subString:" + list.get(list.size() - 1));  
}  
}  
