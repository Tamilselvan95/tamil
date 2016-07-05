#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,i,c=0;
scanf("%d",&a);
for(i=1;i<a;i++)
{
b=pow(2,i);
if(a==b)
c++;
}
if(c==1)
printf("%d is power of 2",a);
else
printf("%d is not power of 2",a);
getch();
}
