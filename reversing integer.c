#include<stdio.h>
void main()
{
int a,b=0,c;
clrscr();
printf("\nEnter the integer\n");
scanf("%d",&a);
while(a!=0)
{
b=b*10;
b=b+a%10;
a=a/10;
}
printf("Reversed integer is: %d",b);
getch();
}
