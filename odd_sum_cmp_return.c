#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c=0;
printf("Enter the number");
scanf("%d",&a);
while(a>9)
{
b=a%10;
if(b%2!=0)
{
c+=b;
}
a/=10;
}
c+=a;
if(c%2==0)
printf("-1");
else
printf("1");
getch();
}
