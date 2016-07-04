#include<stdio.h>
#include<conio.h>
void main()
{
int a,e1,e2,e3,c,c1,c2,c3,e;
b=b1=b2=b3=c=c1=c2=c3=0;
scanf("%d",&a);
e=a/500;
c=a%500;
e1=c/100;
c1=c%100;
e2=c1/50;
c2=c1%50;
e3=c2/10;
c3=c2%10;
printf("%d",e+e1+e2+e3+c3);
getch();
}
