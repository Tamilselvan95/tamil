#include<stdio.h>
#include<conio.h>
int prime(int a)
{
int i,b=0;
if(a>=1)
{
for(i=2;i<a;i++)
{
if(a%i==0)
b++;
}
}
if(b==0)
printf("%d\n",a);
return 0;
}
void main()
{
int a,b;
clrscr();
scanf("%d %d",&a,&b);
a++;
while(a!=b)
{
prime(a);
a++;
}
getch();
}
