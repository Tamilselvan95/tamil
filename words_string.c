#include<stdio.h>
void main()
{
char a[100];int c=0,i;
gets(a);
for(i=0;i!='\0';i++)
{
if(a[i]==' ')
c++;
}
printf("%d",c+1);
getch();
}
