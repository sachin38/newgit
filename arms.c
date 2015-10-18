/* Program to find whether number is armstrong or not */
#include <stdio.h>

int main()
{
   int a,b,c,d,arm,num,temp;

   printf("Enter a four digit number to check\n");
   scanf("%d",&num);

   temp=num;

   d=num%10;
   num=num/10;
   c=num%10;
   num=num/10;
   b=num%10;
   num=num/10;
   a=num;

   arm=a*a*a+b*b*b+c*c*c+d*d*d;

   if(arm==temp)
   {
      printf("Armstrong\n");
   }
   else
   {
      printf("Not armstrong\n");
   }

   return(0);
}
