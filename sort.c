#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i,b=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[i]>a[i+1])
{
b++;
}
}
if(b==0)
printf("sorted") ;
else
printf("Not sorted");
getch();
}
