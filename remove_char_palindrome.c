#include<stdio.h>
#include<conio.h>
#include<string.h>
char palindrome(char a[],char c,int i)
{
char b[100];
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("\n remove %c index %d to create Palindrom %s ",c,i,a);
return 0;
}

void main()
{
char a[100],b[100];
int i,j,k=0,n ;
n=strlen(gets(a));
for(i=0;i<n;i++)
{ k=0;
for(j=0;j<n;j++)
{
if(j!=i)
{
b[k]=a[j];
k++;
}
}
b[k]='\0';
palindrome(b,a[i],i);
}
getch();
}


