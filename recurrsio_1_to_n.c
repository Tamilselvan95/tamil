#include<stdio.h>
int print(int a,int n)
{
printf("%d",a);
if(a==n)
return 0;
else
return print(a+1,n) ;
}
void main()
{
int n;
scanf("%d",&n);
print(1,n);
getch();
}
