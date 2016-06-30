#include<stdio.h>
void main()
{
int a,i,sum=0;
clrscr();
printf("Enter the number ");
scanf("%d",&a);
if(a>0)
{
for(i=1;i<=a;i++)
{
if(i%2!=0)
{
sum+=i;
}
}
}
else
sum=0;
printf("Sum of odd digits in the range = %d",sum);
getch();
}
