#include<stdio.h>
void main()
{
char a[100];
int sum=0,avg,i,n;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=sum/n;
printf("%c",avg);
getch();
}
