#include <stdio.h>
#include<string.h>
void main()
{
char a[20];
clrscr();
printf("Enter the string to find ");
scanf("%s",a);
strupr(a);
if(strcmp(a,"SATURDAY")==0||strcmp(a,"SUNDAY")==0 )
printf("false");
else
printf("true");
getch();
}

