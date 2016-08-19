#include <stdio.h>
int main() {
char a[100],b[100],i,j=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122 || a[i]>=65&&a[i]<=90){}
        else
        {b[j]=a[i];j++;
             }
    }b[j]='\0';
    printf("%s",b);
    return 0;
}
