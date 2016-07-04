#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,k;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(i!=j)
{
for(k=0;k<n;k++)
{
if(a[i]+a[j]==a[k])
printf("%d+ %d= %d\n",a[i],a[j],a[k]);
}
}
}
}
getch();
}
