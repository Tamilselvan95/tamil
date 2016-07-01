#include<stdio.h>
void main()
{
int a[100],b[100],d=0,i,n,j;
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==b[j])
{
d=d+b[j];
}
}
}
printf("%d",d);
getch();
}
