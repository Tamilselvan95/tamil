#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,t,i,j;
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Target number");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}
