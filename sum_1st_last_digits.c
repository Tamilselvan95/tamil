#include <stdio.h>
void main()
{
int a,b, sum=0;
clrscr();
printf("Enter the number to add 1st and last digit : " );
scanf("%d",&a);
if(a>10)
{
sum +=a%10;
}
while(a>=10)
{
a=a/10;
}
sum+=a;
printf("Sum of last 1st and last digit is %d ", sum );
getch();
}



