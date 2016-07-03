#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0,e;
scanf("%d",&a);
e=a;
while(a!=0)
{
b=a%10;
c=b*b*b;
d=d+c;
a/=10;
}
if(d==e)
printf("Armstrong Number");
else
printf("Not Armstrong Number");
getch();
}
