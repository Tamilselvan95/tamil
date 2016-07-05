#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int n,i,j;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[i]==a[j])
{
a[j]='.';
}
}
}
}
for(i=0;i<n;i++)
{
if(a[i]!='.')
printf("%c",a[i]);
}
getch();
}
