#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j=0;
gets(a);
strrev(a);
for(i=0;a[i]!='\0';i++)
{
b[j]=a[i];
j++;
if(a[i+1]!='\0')
{
b[j]='-';
j++;
}
}
b[j]='\0';
puts(b);
getch();
}
