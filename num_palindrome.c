#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1,d=0,e;
clrscr();
scanf("%d",&a);
e=a;
while(a!=0)
{
c=a%10;
b=d+c;
d=b*10;
a/=10;
}
d/=10;
if(d==e)
printf("Palindrome");
else
printf("Not a Palindrome");
getch();
}
