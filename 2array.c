#include<stdio.h>
void main()
{
int a[100],i,n,c,f[100],g[100],d,e,j=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a[i]);
}
c=(n/2)+1;
d=e=0;
for(i=1;a[i]!=c;i++)
{
d=d+a[i];
e=e+a[n-j];
printf("\n%d%d",d,e);
j++;
}
printf("%d%d",d,e);
if(d==e)
{
printf("[ ");
for(i=1;i<=c;i++)
{
printf("%d ",a[i]);
}
printf(" ],[ ");
for(i=n;i>c;i--)
{
printf("%d ",a[i]);
}
printf("]");
}
else
{
printf("NOT POSSIBLE");
}
getch();
}
