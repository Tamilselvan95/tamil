#include<conio.h>
#include<stdio.h>
void main()
{
int a,n,b=0;
printf("Enter the integer: " );
scanf("%d",&a);
if(a>9||a<-9)
{
while(a>9||a<-9)
{
n=0;
n=a%10;
n*=n;
a=a/10;
b+=n;
}
b=b+(a*a);
printf("%d",b);
}
else
printf("Enter min 2 digits ");
getch();
}
