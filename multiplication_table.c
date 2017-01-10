   #include<stdio.h>
   int main()
   {
   int a,b,i;
   clrscr();
   printf("Enter the multiplication number ");
   scanf("%d",&a);
   printf("\n enter the number of terms ");
   scanf("%d",&b);
   for(i=0;i<=b;i++)
   {
   int c=i*a;
   printf("\n %d * %d =%d ",i,a,c);
   }
   return 0;
   }
