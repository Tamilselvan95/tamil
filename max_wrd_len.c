#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100],fin[100];
int c,max=0,i,j,n,m,k;
clrscr();
gets(a);
n=strlen(a);
for(i=0;i<=n;i++)
{c=0;
if(a[i]==' ' || a[i]=='\0')
{m=0;
for(j=i-1;a[j]!=' '&& j>=0;j--,m++)
{
c++;
b[m]=a[j];
}
b[m]='\0';
}
if(c>max){
max=c;
strcpy(fin,b);}
}printf("\n%s(length:%d)",strrev(fin),max);

getch();
}
