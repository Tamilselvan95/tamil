#include<stdio.h>
void main()
{
int a,c,i,j,k,e=0;
char b[100];
clrscr();
scanf("%d",&a);
c=a;
while(a>9)
{
for(i=0;a>9;i++)
{
a=a/10;
b[i]=a;
}
b[i+1]=a;
for(j=0;j<=i;j++)
{
b[i]=b[i]*b[i];
}
for(k=0;k<=i;k++)
{
e=e+b[k];
}
a=e;
}
if(a==1)
printf("%d is happy number",c);
else
printf("%d is not a happy number ",c);
getch();
}
