#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==i)
{
printf("the number %d equal to its index %d\n",a[i],i);
}
}
getch();
}
