#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[100],b[100] ;
int c,d,i,j,e=0,f=0;
printf("Enter string\n");
c=strlen(gets(a));
printf("Enter the sub string to check:") ;
d=strlen(gets(b));
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
{
if(a[i]==b[j])
e++;
}
if(e==0)
{
f++;
}
}
if(f!=0)
printf("%s is Not a Substring of %s ",b,a);
else
printf("%s is a Sub String of %s ",b,a);
getch();
}
