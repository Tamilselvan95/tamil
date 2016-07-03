#include<conio.h>
#include<iostream.h>
void main()
{
int a,b;
clrscr();
cin>>a>>b;
a++;
while(a!=b)
{
if(a%2==0)
cout<<a;
a++;
}
getch();
}
