#include<stdio.h>
void hanoi(int n, char a,char b, char c)
{
if(n==1)
{
printf("\n move 1 from %c to %c",a,b);
return;
}
hanoi(n-1,a,b,c);
printf("\nmove %d from %c to %c",n,a,b);
hanoi(n-1,a,b,c);
}
void main()
{
int n;
scanf("%d",&n);
hanoi(n,'A','B','C');
getch();
}
