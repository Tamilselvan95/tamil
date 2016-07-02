#include<stdio.h>
void main()
{
int a,x=0,y,i=0,b=1,k,z,t=1,j;
clrscr();
scanf("%d",&a);
for(x=0;x<a/2;x++)
{
z=1;
b=1;
y=x;
for(i=0;y>9;i++)
{
b*=y%10;
y=y/10;
}
b*=y;
t=b*x;
if(a==t)
printf("%d",x);
}
getch();
}
