/* Programme to reverse number */
#include <stdio.h>

int main()
{

   int n,r,rev=0;

   printf("\n\nEner the  number:");
   scanf("%d",&n);

   if(n<=1000)
   {
      while(n>0)
      {
         r=n%10;
         rev=rev*10+r;
         n=n/10;
      }
 
   printf("\nThe reverse number=%d\n",rev);
   }
   else
   {
      printf("\nNumber is not four digit\n");
   }

   return(0);

}
