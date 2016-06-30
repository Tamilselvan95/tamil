#include<stdio.h>
#include<conio.h>
void main()
{
int a, i,j,num;
printf("Enter value of pascal triangle");
scanf("%d",&a);
for(i=0;i<a;i++)
{
num = 1;
for(j=0;j<=i;j++)
{
printf("%d",num);
num=(num*(i-j)/(j+1));
}
printf("\n");
}
getch();
}
