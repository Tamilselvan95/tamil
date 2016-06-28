#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
printf("\n Enter the integer : ");
gets(a);
printf("\n Reversed integer is \n %s",strrev(a));
getch();
}
