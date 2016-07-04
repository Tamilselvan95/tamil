#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,x,i,c=1,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&b);
while(c<=b)
{
x=a[0];
for(i=0;i<n-1;i++)
{
a[i]=a[i+1];
}
a[n-1]=x;
a[n]='\0';
c++;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}
