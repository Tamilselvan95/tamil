#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c=0,e=0,f=0,d;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c+=b;
a/=10;
}
d=c;
while(d!=0)
{
e=d%10;
f+=e;
f*=10;
d/=10;
}
f/=10 ;
if(f==c)
printf("palindrome" );
else
printf("Not a palindrome");
getch();
}
