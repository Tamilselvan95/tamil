#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,b=0,c=0,d,e=0,x=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='@')
{
b++;
d=0;
for(j=i+1;a[j]!='.';j++)
{
d++;
}
}
if(a[i]=='.')
{
c++;
for(j=i+1;a[j]!='\0';j++)
{
 if(a[j]=='c'&&a[j+1]=='o'&&a[j+2]=='m')
 x++;
}
}
}
for(i=1;a[i]!='@';i++)
e++;
if(b==1&&c==1&&d==5&&e>3&&x==1)
printf("valid");
else
printf("Invalid");

getch();
}
