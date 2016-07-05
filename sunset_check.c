#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c=0,d,e,i=0,j=0;
scanf("%d %d",&d,&e);
for(i=0;i<d;i++)
{scanf("%d",&a[i]);}
for(j=0;j<e;j++)
{
scanf("%d",&b[j]);
}
if(d<=e)
{
for(i=0;i<d;i++)
{
for(j=0;j<e;j++)
{
if(a[i]==b[j])
{
c++;
}}}}
if(c==d)
printf("Subset");
else
printf("Not a sub set");
getch();
}
