#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,count=0,b,c;
scanf("%d",&n);
while(a!=n)
{
if(a==2)
count++;
else
{
b=a%10;
c=a/10;
if(b==2)
count++;
if(c==2)
count++;
}
a++;
}
printf("%d",count);
getch();
}
