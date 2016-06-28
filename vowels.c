#include<stdio.h>
void main()
{
char a[200];
int b=0,i;
clrscr();
printf("Enter the string \n");
gets(a);
for(i=0;a[i]!='\0';++i)
{
if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
++b;
}
printf("Number of vowels in %s is %d",a,b);
getch();
	  }
