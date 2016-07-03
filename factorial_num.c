#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b=1,i;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b*=i;
}
printf("%d",b);
getch();
}
