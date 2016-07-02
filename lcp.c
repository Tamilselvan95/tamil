#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100],c[100];
int d,e,f,i,j=0;
gets(a);
gets(b);
d=strlen(a);
e=strlen(b);
if(d>e)
f=d;
else
f=e;
for(i=0;i<f;i++)
{
if(a[i]==b[i])
{
 c[i]=a[i];
 printf("%c",c[i]);
j++;
 }
 else
 break;
 }
 printf("%dNumber of comman prefix char",j);
 getch();
 }
