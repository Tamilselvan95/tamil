#include<conio.h>
#include<stdio.h>
void main()
{
int a,b;
scanf("%d",&a) ;
if(a%2!=0)
{
a--;
}
b=a/2;
if(a%2!=0)
b++;
printf("%d",b);
getch();
}
