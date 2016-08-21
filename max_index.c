#include<stdio.h>
void main()
{
int a[100],n,max=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(max<a[i])
max=a[i];
}
printf("%d",&max);
getch();
}
