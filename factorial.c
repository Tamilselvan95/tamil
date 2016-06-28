#include<stdio.h>
#include<conio.h>
void main()
{
long b=1;
int a,c;
clrscr();
printf("Enter the factorial of number:\n");
scanf("%d",&a);
for(c=1;c<=a;c++)
b=b*c;
printf("The factorial of a given number is:\n%ld",b);
getch();
}
