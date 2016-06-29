#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j=0;
clrscr();
/*printf("Enter the string \n " );*/
gets(a);
strrev(a);
printf("%s\n",a);
for(i=0;a[i]!='\0';++i)
{
if((a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')==0)
{
b[j]=a[i];
j++;
}
}
b[j]='\0';
printf("%s",b);
getch();
}
