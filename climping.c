#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d",&a) ;
c=a;
if(a%2!=0)
{
a--;
}
b=a/2;
if(c%2!=0)
b++;
printf("%d",b);
getch();
}
