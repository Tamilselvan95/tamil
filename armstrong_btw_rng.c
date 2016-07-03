#include<stdio.h>
#include<conio.h>
int arm(int a)
{
int b,c,d=0,e;
e=a;
while(a!=0)
{
b=a%10;
c=b*b*b;
d=d+c;
a/=10;
}
if(d==e)
printf("%d\n",e);
}
void main()
{
int a,b;
clrscr();
scanf("%d %d",&a,&b);
a++;
while(a!=b)
{
arm(a);
a++;
}
getch();
}
