/* Programme to find sum of 4 digits of number */

#include <stdio.h>

int main()
{

   int a,b,c,d,tot,num;

   printf("Enter the number:");
   scanf("%d",&num); 
 
   a=num%10;
   num=num/10;
   b=num%10;
   num=num/10;
   c=num%10;
   num=num/10;
   d=num;
  
   tot=d+a;

   printf("The sum of  first and second digits is %d\n",tot);
   return(0);

}
