/* Programme to calculate profit or loss */
#include <stdio.h>

int main()
{

   int cp,sp,profit,loss;

   printf("Enter cost price:");
   scanf("%d",&cp);
   
   printf("Enter selling price:");
   scanf("%d",&sp);

   if(cp>sp)
   {
      loss=cp-sp;
      printf("\n\n\nLoss is %d\n",loss);
   }
   else
   {
      profit=sp-cp;
      printf("\n\n\nProfit is %d\n",profit);
   }

   return(0);

}
