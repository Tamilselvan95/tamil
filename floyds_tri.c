#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,b=0;
clrscr();
printf("number for floyds triangle\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(j=1;j<=i;j++)
{
 b++ ;
printf("%d\t",b);
}
printf("\n");
}
getch();
}
