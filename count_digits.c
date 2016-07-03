#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;
clrscr();
scanf("%d",&a);
while(a>9)
{
b++;
a=a/10;
}
b++;
printf("%d",b);
getch();
}
