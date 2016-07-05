#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i,s,b,c=0;
clrscr();
printf("NO of coins");
scanf("%d",&n);
printf("Value of coins ");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("SUM= ");
scanf("%d",&s);
while(s!=0)
{
b=0;
b=s/a[n];
if(b!=0)
printf("%d coin of %d rs\n",b,a[n]);
c+=b;
s=s%a[n];
n--;
}
printf("Total coins= %d",c);
getch() ;
}
