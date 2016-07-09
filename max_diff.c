#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[100],i,n,j,d,s=0,z,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
j=i+1;
if(j<n)
{
d=abs(a[i]-a[j]);
if(d>s)
{
 z=a[i];
 k=a[j];
 s=d;
 }
}
}
printf("%d(%d) difference is %d",z,k,s);
getch();
}
