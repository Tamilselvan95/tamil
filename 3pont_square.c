#include <stdio.h>
int find(int a1,int a2, int b1, int b2,int c1,int c2,int d1,int d2)
    {
        if((a1+c1)/2==(b1+d1)/2 &&(a2+c2)/2==(b2+d2)/2)
        return 1;
        else 
        return 0;
    }
    int main()
{
int a1,a2,b1,b2,c1,c2,d1,d2,s;
scanf("%d %d %d %d %d %d %d %d",a1,a2,b1,b2,c1,c2,d1,d2);

   if (a1 != b1 && a1 != b2)
	   s= find(a1,a2,c1,c2,b1,b2,d1,d2);
	    else if (a1 != c1 && a1 != c2)
	   s=find(a1,a2,b1,b2,c1,c2,d1,d2);
	    else if (a1 != d1 && a1 != d2)
	    s=find(a1,a2,b1,b2,d1,d2,c1,c2);
	    else
	    s=0;
	    if(s==1)
	    printf("Square");
	    else
	    printf("Not a square");
}
