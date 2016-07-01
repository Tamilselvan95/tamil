#include<stdio.h>
#include<conio.h>
void main()
{
int a,j,i,b=1;
printf("Enter the number");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(i%2!=0)
{
j++;
if(j%2==0)
{
b=b+i;
}
else
{
b=b-i;
}
}
}
printf("%d",b);
getch();
}
