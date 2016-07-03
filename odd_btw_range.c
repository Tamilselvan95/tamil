#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d %d",&a,&b);
a++;
while(a!=b)
{
if(a%2!=0)
printf("\n %d",a);
a++;
}
getch();
}
