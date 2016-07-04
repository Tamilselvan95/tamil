#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],s,i,j,value=0,k;
printf("Enter the size");
scanf("%d",&s);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
value=0;
for(k=0;k<n;k++)
{
if(a[j]==a[k])
value++;
}
if(value==1)
printf("%d",a[i]);
}
getch();
}
