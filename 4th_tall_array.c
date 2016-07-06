#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n=50,i,j,c;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
 c=a[j];
 a[j]=a[i];
 a[i]=c;
 }
 }
 }
 printf("%d",a[3]);
 getch();
 }
