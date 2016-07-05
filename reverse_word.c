#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,j;
clrscr();
gets(a);
strrev(a);
puts(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i+1]==' '||a[i+1]==NULL )
{
for(j=i;a[j]!=' '&&a[j]!=NULL;j--)
{
printf("%c",a[j]);
}
}
printf(" ");
}
getch();

}
