#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,b1,b2,b3,c,c1,c2,c3,e;
b=b1=b2=b3=c=c1=c2=c3=0;
scanf("%d",&a);
b=a/500;
c=a%500;
b1=c/100;
c1=c%100;
b2=c1/50;
c2=c1%50;
b3=c2/10;
c3=c2%10;
e=b+b1+b2+b3+c3;
printf("%d",e);
getch();
}
