#include<stdio.h>
void main()
{
int a[100],n,min=0,max=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("%d",max+min);
getch();
}
