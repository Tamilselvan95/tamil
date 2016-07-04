#include <stdio.h>
#include <stdlib.h>
void repeat(int a[], int s)
{
int i;
printf("The repeating elements are: \n");
for (i = 0;i<s;i++)
{
if (a[abs(a[i])] >= 0)
a[abs(a[i])] = -a[abs(a[i])];
else
printf(" %d ", abs(a[i]));
}
}
int main()
{
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
repeat(a,n);
getchar();
return 0;
}
